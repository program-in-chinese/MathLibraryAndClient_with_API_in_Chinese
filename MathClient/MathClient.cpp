// MathClient.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"  
#include <iostream>  
#include "MathLibrary.h"  

using namespace std;

int main()
{
	double a = 7.4;
	int b = 99;

	cout << "a加b=" <<
		数学库::Functions::加(a, b) << endl;
	/*cout << "a乘b = " <<
		MathLib::Functions::乘(a, b) << endl;
	cout << "a + (a * b) = " <<
		MathLib::Functions::加乘(a, b) << endl;*/

	return 0;
}
