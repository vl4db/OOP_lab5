#include "Store.h"
#include "Orders.h"
#include <iostream>

using namespace std;

int main()
{
	Store store;

	store.add("Shoes", "Nike", 250, 42);
	store.add("Shoes", "Adidas", 200, 41);
	store.add("Toys", "Car", 50, 5);
	store.add("Toys", "Doll", 70, 3);

	vector<Shoe> shoes;
	Shoe shoe;
	shoe.setName("Puma");
	shoe.setPrice(180);
	shoe.setSize(40);
	shoes.push_back(shoe);
	store.add("Shoes", shoes);

	store.displayShoes(store.getShoesSortedByName());
	store.displayToys(store.getToysSortedByPrice());

	Product* product = store.find("Shoes", "Nike");
	if (product != nullptr)
	{
		cout << product->getName() << endl;
	}

	Orders orders;
	vector<Product*> orderProducts;
	orderProducts.push_back(store.find("Shoes", "Nike"));
	orderProducts.push_back(store.find("Toys", "Car"));
	orders.addOrder(orderProducts);

	cout << orders.getTotal() << endl;

	store.remove("Shoes", "Adidas");
	store.remove("Toys", vector<string>{ "Car", "Doll" });

	return 0;
}