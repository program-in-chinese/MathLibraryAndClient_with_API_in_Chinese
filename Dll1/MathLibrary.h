#pragma once  

#ifdef MATHLIBø‚RARY_EXPORTS  
#define MATHLIBø‚RARY_API __declspec(dllexport)   
#else  
#define MATHLIBø‚RARY_API __declspec(dllimport)   
#endif  

namespace MathLibø‚
{
	// This class is exported from the MathLibrary.dll  
	class Functions
	{
	public:
		static MATHLIBø‚RARY_API double º”(double a, double b);
		/*
		static MATHLIBRARY_API double ≥À(double a, double b);

		// Returns a + (a * b)  
		static MATHLIBRARY_API double º”≥À(double a, double b);*/
	};
}