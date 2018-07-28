#pragma once  

#ifdef 数学库_EXPORTS  
#define 数学库_API __declspec(dllexport)   
#else  
#define 数学库_API __declspec(dllimport)   
#endif  

namespace 数学库
{
	// This class is exported from the MathLibrary.dll  
	class Functions
	{
	public:
		static 数学库_API double 加(double a, double b);
		/*
		static MATHLIBRARY_API double 乘(double a, double b);

		// Returns a + (a * b)  
		static MATHLIBRARY_API double 加乘(double a, double b);*/
	};
}