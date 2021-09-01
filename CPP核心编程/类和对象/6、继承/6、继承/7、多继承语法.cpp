#include<iostream>
using namespace std;

//多继承语法

class Base017
{
public:
	Base017()
	{
		m_A = 100;
	}
	int m_A;
};

class Base027
{
public:
	Base027()
	{
		m_A = 200;
	}
	int m_A;
};
//子类 需要继承B1和B2
//语法：class 子类：继承方式 父类1，继承方式 父类2...
class Son7:public Base017,public Base027
{
public:
	Son7()
	{
		m_C = 300;
		m_D = 400;
	}
	int m_C;
	int m_D;
};

void test017()
{
	Son7 s;
	cout << "sizeofSon=" << sizeof(s) << endl;
	//当父类中出现同名成员，需要加作用域区分
	cout << "m_A" << s.Base017::m_A << endl;
	cout << "m_A" << s.Base027::m_A << endl;
}

int main7()
{
	test017();

	system("pause");

	return 0;
}