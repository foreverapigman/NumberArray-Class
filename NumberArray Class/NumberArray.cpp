#include "NumberArray.h"
#include <iostream>
using namespace std;

NumberArray::NumberArray(int size)
{
	if (size <= 0)
	{
		size = default_size;
	}
	this->size = size;
	data = new double[this->size];
	data = new double[this->size];
	for (int i = 0; i < this->size; i++)
	{
		data[i] = 0.0;
	}
}

NumberArray::~NumberArray()
{
	delete[] data;
}

void NumberArray::setNumber(int index, double value)
{

}

/*double NumberArray::getNumber(int index) const
{

}

double NumberArray::getMin() const
{

}

double NumberArray::getMax() const
{

}

double NumberArray::getAverage() const
{

}*/

void NumberArray::print() const
{
	for (int i = 0; i < size; i++)
	{
		cout << data[i] << " ";
	}
	cout << endl;
}
