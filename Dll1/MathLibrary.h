#pragma once  

#ifdef MATHLIB��RARY_EXPORTS  
#define MATHLIB��RARY_API __declspec(dllexport)   
#else  
#define MATHLIB��RARY_API __declspec(dllimport)   
#endif  

namespace MathLib��
{
	// This class is exported from the MathLibrary.dll  
	class Functions
	{
	public:
		static MATHLIB��RARY_API double ��(double a, double b);
		/*
		static MATHLIBRARY_API double ��(double a, double b);

		// Returns a + (a * b)  
		static MATHLIBRARY_API double �ӳ�(double a, double b);*/
	};
}