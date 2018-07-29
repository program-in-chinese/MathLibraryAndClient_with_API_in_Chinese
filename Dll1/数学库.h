#pragma once  

#ifdef 数学库导出
#define 数学库接口 __declspec(dllexport)   
#else  
#define 数学库接口 __declspec(dllimport)   
#endif  

namespace 数学库
{
	class 函数
	{
	public:
		static 数学库接口 double 加(double a, double b);
	};
}