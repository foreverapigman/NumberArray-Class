#ifndef NUMBERARRAY_H
#define NUMBERARRAY_H
#include <string>

class NumberArray
{
private:
	int size;
	double* data;
	static const int default_size = 10;

public:
	NumberArray(int size = default_size);
	~NumberArray();
	void setNumber(int index, double value);
	/*double getNumber(int index) const;
	double getMin() const;
	double getMax() const;
	double getAverage() const;*/
	void print() const;
};

#endif