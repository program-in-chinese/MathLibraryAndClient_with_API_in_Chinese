#pragma once  

#ifdef ��ѧ��_EXPORTS  
#define ��ѧ��_API __declspec(dllexport)   
#else  
#define ��ѧ��_API __declspec(dllimport)   
#endif  

namespace ��ѧ��
{
	// This class is exported from the MathLibrary.dll  
	class ����
	{
	public:
		static ��ѧ��_API double ��(double a, double b);
	};
}