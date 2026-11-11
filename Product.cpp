#include "Product.h"
#include <iostream>

using namespace std;

// Constructor

Product::Product()
{
    name = "";
    price = 0.0;
}

// Setters

void Product::setName(string name)
{
    this->name = name;
}

void Product::setPrice(double price)
{
    this->price = price;
}

// Getters

string Product::getName() const
{
    return name;
}

double Product::getPrice() const
{
    return price;
}

