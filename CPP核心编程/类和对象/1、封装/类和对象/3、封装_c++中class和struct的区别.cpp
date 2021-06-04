#include<iostream>
using namespace std;

class C1
{
	int m_A;
};

struct C2
{
	int m_A;
};

int main3()
{
	//struct 和 class的区别
	//struct 默认权限是 公共 public
	//class  默认权限是 私有 private 
	C1 c1;
	//c1.m_A = 100;

	C2 c2;
	c2.m_A = 100;//在struct中默认权限为公共，因此可以访问

	system("pause");

	return 0;
}