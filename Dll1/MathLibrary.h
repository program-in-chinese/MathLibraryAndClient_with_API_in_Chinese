#pragma once  

#ifdef MATHLIBRARY_EXPORTS  
#define MATHLIBRARY_API __declspec(dllexport)   
#else  
#define MATHLIBRARY_API __declspec(dllimport)   
#endif  

namespace MathLibrary
{
	// This class is exported from the MathLibrary.dll  
	class Functions
	{
	public:
		static MATHLIBRARY_API double ¼Ó(double a, double b);

		static MATHLIBRARY_API double ³Ë(double a, double b);

		// Returns a + (a * b)  
		static MATHLIBRARY_API double ¼Ó³Ë(double a, double b);
	};
}