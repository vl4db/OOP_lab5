#pragma once

#include "Shoe.h"
#include "Toy.h"

#include <string>
#include <vector>

using namespace std;

class Store
{
public:
	void add(string department, string name, double price, int size);
	void add(string department, const vector<Shoe>& products);
	void add(string department, const vector<Toy>& products);

	Product* find(string department, string name);
	bool remove(string department, string name);
	void remove(string department, const vector<string>& names);

	vector<Shoe> getShoesSortedByName() const;
	vector<Shoe> getShoesSortedByPrice() const;
	vector<Toy> getToysSortedByName() const;
	vector<Toy> getToysSortedByPrice() const;

	void displayShoes(const vector<Shoe>& products) const;
	void displayToys(const vector<Toy>& products) const;

private:
	vector<Shoe> shoes;
	vector<Toy> toys;
};