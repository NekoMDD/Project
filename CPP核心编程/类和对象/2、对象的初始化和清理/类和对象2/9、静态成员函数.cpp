#include<iostream>
using namespace std;

//静态成员函数
//1、所有对象共享同一个函数
//2、静态成员函数只能访问静态成员变量

class Person9
{
public:
	//静态成员函数
	static void func9()
	{
		m_A = 100;//静态成员函数可以访问静态成员变量
		//m_B = 200;//静态成员函数不可以访问非静态成员变量,无法区分到底是哪个对象的m_B的属性
		cout << "static void func的调用" << endl;
	}
	static int m_A;//静态成员变量
	int m_B;//非静态成员变量

	//静态成员函数也是有访问权限的
private:
	static void func29()
	{
		cout << "static void func2的调用" << endl;
	}
};

int Person9::m_A = 0;

//有两种访问方式
void test019()
{
	//1、通过对象访问
	Person9 p;
	p.func9();
	//2、通过类名访问
	Person9::func9();
	//Person::func2();//类外访问不到私有的静态成员函数
}

int main9()
{
	test019();

	system("pause");

	return 0;
}