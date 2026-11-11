#include "Shoe.h"
#include <iostream>

using namespace std;

Shoe::Shoe()
{
	 size = 0;
}

void Shoe::setSize(int size)
{
	this->size = size;
}

int Shoe::getSize() const
{
	return size;
}
