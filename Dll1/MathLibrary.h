#pragma once  

#ifdef MATHLIBARARY_EXPORTS  
#define MATHLIBARARY_API __declspec(dllexport)   
#else  
#define MATHLIBARARY_API __declspec(dllimport)   
#endif  

namespace MathLiba
{
	// This class is exported from the MathLibrary.dll  
	class Functions
	{
	public:
		static MATHLIBARARY_API double ��(double a, double b);
		/*
		static MATHLIBRARY_API double ��(double a, double b);

		// Returns a + (a * b)  
		static MATHLIBRARY_API double �ӳ�(double a, double b);*/
	};
}