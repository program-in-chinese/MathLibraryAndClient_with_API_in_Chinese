// Dll1.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"  
#include "MathLibrary.h"  

namespace MathLiba
{
	double Functions::加(double a, double b)
	{
		return a + b;
	}
	/*
	double Functions::乘(double a, double b)
	{
		return a * b;
	}

	double Functions::加乘(double a, double b)
	{
		return a + (a * b);
	}*/
}
