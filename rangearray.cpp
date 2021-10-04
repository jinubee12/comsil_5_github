#include <iostream>
using namespace std;
#include "RangeArray.h"

RangeArray::RangeArray(int i,int j):Array(j-i+1)
{
	low = i;
	high = j; 
}

RangeArray::~RangeArray()
{
	
}

int RangeArray::baseValue()
{
	return low;
}
int RangeArray::endValue()
{
	return high;
}
int& RangeArray::operator [](int i)
{
	static int tmp;
	if(low <= i && i<=high)
		return data[i-low];
	else{
		cerr << "Array bound error!\n";
		return tmp;
	}
	//return Array::operator [](i-low);
}
int RangeArray::operator [](int i) const
{	
	if(low<=i&&i<=high)
		return data[i-low];
	else{
		cerr << "Array bound error!\n";
		return 0;
	}
	//return Array::operator [](i-low);
}
