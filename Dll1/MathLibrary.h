#pragma once  

#ifdef 数学库_EXPORTS  
#define 数学库_API __declspec(dllexport)   
#else  
#define 数学库_API __declspec(dllimport)   
#endif  

namespace 数学库
{
	// This class is exported from the MathLibrary.dll  
	class 函数
	{
	public:
		static 数学库_API double 加(double a, double b);
	};
}