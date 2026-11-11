#include "Toy.h"

#include <iostream>

using namespace std;

Toy::Toy()
{
	size = 0;
}

void Toy::setSize(int size)
{
	this->size = size;
}

int Toy::getSize() const
{
	return size;
}
