#include "Store.h"

#include <algorithm>
#include <iostream>

using namespace std;

// adders

void Store::add(string department, string name, double price, int size)
{
	if (department == "Shoes")
	{
		Shoe shoe;
		shoe.setName(name);
		shoe.setPrice(price);
		shoe.setSize(size);
		shoes.push_back(shoe);
	}
	else if (department == "Toys")
	{
		Toy toy;
		toy.setName(name);
		toy.setPrice(price);
		toy.setSize(size);
		toys.push_back(toy);
	}
}

void Store::add(string department, const vector<Shoe>& products)
{
	if (department == "Shoes")
	{
		shoes.insert(shoes.end(), products.begin(), products.end());
	}
}

void Store::add(string department, const vector<Toy>& products)
{
	if (department == "Toys")
	{
		toys.insert(toys.end(), products.begin(), products.end());
	}
}

// finder

Product* Store::find(string department, string name)
{
	if (department == "Shoes")
	{
		for (Shoe& shoe : shoes)
		{
			if (shoe.getName() == name)
			{
				return &shoe;
			}
		}
	}
	else if (department == "Toys")
	{
		for (Toy& toy : toys)
		{
			if (toy.getName() == name)
			{
				return &toy;
			}
		}
	}
	return nullptr;
}

// removers

bool Store::remove(string department, string name)
{
	if (department == "Shoes")
	{
		for (int i = 0; i < shoes.size(); i++)
		{
			if (shoes[i].getName() == name)
			{
				shoes.erase(shoes.begin() + i);
				return true;
			}
		}
	}
	else if (department == "Toys")
	{
		for (int i = 0; i < toys.size(); i++)
		{
			if (toys[i].getName() == name)
			{
				 toys.erase(toys.begin() + i);
				return true;
			}
		}
	}
	return false;
}

void Store::remove(string department, const vector<string>& names)
{
	for (string name : names)
	{
		remove(department, name);
	}
}

// sorted getters

vector<Shoe> Store::getShoesSortedByName() const
{
	vector<Shoe> result = shoes;
	sort(result.begin(), result.end(), [](Shoe a, Shoe b)
	{
		return a.getName() < b.getName();
	});
	return result;
}

vector<Shoe> Store::getShoesSortedByPrice() const
{
	vector<Shoe> result = shoes;
	sort(result.begin(), result.end(), [](Shoe a, Shoe b)
	{
		return a.getPrice() < b.getPrice();
	});
	return result;
}

vector<Toy> Store::getToysSortedByName() const
{
	vector<Toy> result = toys;
	sort(result.begin(), result.end(), [](Toy a, Toy b)
	{
		return a.getName() < b.getName();
	});
	return result;
}

vector<Toy> Store::getToysSortedByPrice() const
{
	vector<Toy> result = toys;
	sort(result.begin(), result.end(), [](Toy a, Toy b)
	{
		return a.getPrice() < b.getPrice();
	});
	return result;
}

// displayers

void Store::displayShoes(const vector<Shoe>& products) const
{
	for (const Shoe& shoe : products)
	{
		cout << shoe.getName() << " " << shoe.getPrice() << " " << shoe.getSize() << endl;
	}
}

void Store::displayToys(const vector<Toy>& products) const
{
	for (const Toy& toy : products)
	{
		cout << toy.getName() << " " << toy.getPrice() << " " << toy.getSize() << endl;
	}
}