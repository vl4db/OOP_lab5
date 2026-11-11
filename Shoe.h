#pragma once

#include "Product.h"
#include <string>

using namespace std;

class Shoe : public Product
{
public:
	Shoe();

	void setSize(int size);
	int getSize() const;

private:
	int size;
};

