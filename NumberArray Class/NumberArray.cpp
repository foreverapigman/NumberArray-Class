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
	if (index >= 0 && index < size)
	{
		data[index] = value;
	}
	else
	{
		cout << "Invalid Input\n";
	}
}

double NumberArray::getNumber(int index) const
{
	if (index >= 0 && index < size)
	{
		return data[index];
	}
	else {
		cout << "Invalid Input\n";
		return 0.0;
	}
}

double NumberArray::getMin() const
{
	double min = data[0];
	for (int i = 1; i < size; i++)
	{
		if (data[i] < min)
		{
			min = data[i];
		}
	}
	return min;
}

double NumberArray::getMax() const
{
	double max = data[0];
	for (int i = 1; i < size; i++)
	{
		if (data[i] > max)
		{
			max = data[i];
		}
	}
	return max;
}

double NumberArray::getAverage() const
{
	double sum = 0.0;
	for (int i = 0; i < size; i++)
	{
		sum += data[i];
	}
	return sum / size;
}

void NumberArray::print() const
{
	for (int i = 0; i < size; i++)
	{
		cout << data[i] << " ";
	}
	cout << endl;
}
