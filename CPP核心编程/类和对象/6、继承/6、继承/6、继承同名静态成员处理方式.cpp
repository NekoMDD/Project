#include<iostream>
using namespace std;

//继承中的同名静态成员处理方式
class Base6
{
public:
	static int m_A;

	static void func6()
	{
		cout << "Base下static void func调用" << endl;
	}
};
int Base6::m_A = 100;

class Son :public Base6
{
public:
	static int m_A;
	static void func6()
	{
		cout << "Son下static void func调用" << endl;
	}
};
int Son::m_A = 200;

void test016()
{
	//1、通过对象访问
	cout << "通过对象访问" << endl;
	Son s6;
	cout << "Son下m_A=" << s6.m_A << endl;
	cout << "Base下m_A = " << s6.Base6::m_A << endl;
	//2、通过类名访问
	cout << "通过类名访问" << endl;
	cout << "Son下m_A" << Son::m_A << endl;
	//第一个::代表通过类名方式访问 第二个::代表访问父类作用域下
	cout << "Base下m_A" << Son::Base6::m_A << endl;
}

//同名静态成员属性
void test026()
{
	//1、通过对象访问
	Son s6;
	s6.func6();
	s6.Base6::func6();
	//2、通过类名访问
	Son::func6();
	Son::Base6::func6();
	//子类出现和父类同名静态成员函数，也会隐藏父类中所有同名成员函数
	//如果想访问父类中被隐藏的同名成员，需要加作用域
}


int main6()
{
	//test01();
	test026();

	system("pause");

	return 0;
}