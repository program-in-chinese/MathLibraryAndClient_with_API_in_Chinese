// MathClient.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"  
#include <iostream>  
#include "MathLibrary.h"  

using namespace std;

int main()
{
	double a = 1;
	int b = 2;

	cout << a << "加" << b << "=" <<
		数学库::函数::加(a, b) << endl;

	return 0;
}
