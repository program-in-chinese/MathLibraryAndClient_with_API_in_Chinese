#pragma once  

#ifdef ��ѧ�⵼��
#define ��ѧ��ӿ� __declspec(dllexport)   
#else  
#define ��ѧ��ӿ� __declspec(dllimport)   
#endif  

namespace ��ѧ��
{
	class ����
	{
	public:
		static ��ѧ��ӿ� double ��(double a, double b);
	};
}