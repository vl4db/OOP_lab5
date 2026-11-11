#include "Orders.h"

void Orders::Order::addProducts(const vector<Product*>& products)
{
	for (Product* product : products)
	{
		this->products.push_back(product);
	}
}

vector<Product*> Orders::Order::findProducts(string name)
{
	vector<Product*> result;

	for (Product* product : products)
	{
		if (product->getName() == name)
		{
			result.push_back(product);
		}
	}

	return result;
}

double Orders::Order::getTotal()
{
	double total = 0;

	for (Product* product : products)
	{
		total += product->getPrice();
	}

	return total;
}

void Orders::addOrder(const vector<Product*>& products)
{
	Order order;
	order.addProducts(products);
	orders.push_back(order);
}

vector<Product*> Orders::findProducts(string name)
{
	vector<Product*> result;

	for (Order& order : orders)
	{
		vector<Product*> found = order.findProducts(name);
		result.insert(result.end(), found.begin(), found.end());
	}

	return result;
}

double Orders::getTotal()
{
	double total = 0;

	for (Order& order : orders)
	{
		total += order.getTotal();
	}

	return total;
}
