#pragma once

#include "Product.h"

#include <string>
#include <vector>

using namespace std;

class Orders
{
private:
	class Order
	{
	private:
		vector<Product*> products;

	public:
		void addProducts(const vector<Product*>& products);
		vector<Product*> findProducts(string name);
		double getTotal();
	};

	vector<Order> orders;

public:
	void addOrder(const vector<Product*>& products);
	vector<Product*> findProducts(string name);
	double getTotal();
};
