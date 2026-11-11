#pragma once

#include <string>

using namespace std;

class Product
{
private:
    string name;
    double price;

public:
    Product();

    void setName(string name);
    void setPrice(double price);

    string getName() const;
    double getPrice() const;
};
