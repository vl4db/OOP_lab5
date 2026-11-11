#pragma once

#include "Product.h"
#include <string>

using namespace std;

class Toy : public Product
{
public:
	Toy();

	void setSize(int size);

	int getSize() const;

private:
	int size;
};

