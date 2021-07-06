#include<iostream>
using namespace std;

//继承中同名成员处理
class Base5
{
public:
	Base5()
	{
		m_A = 100;
	}

	void func5()
	{
		cout << "Base-func调用" << endl;
	}
	void func5(int a)
	{
		cout << "Base-func(int a)调用" << endl;
	}
	int m_A;
};

class Son5 :public Base5
{
public:
	Son5()
	{
		m_A = 200;
	}

	void func5()
	{
		cout << "Son-func调用" << endl;
	}
	int m_A;
};

//同名成员属性处理
void test015()
{
	Son5 s;
	cout << "Son下m_A=" << s.m_A << endl;
	//如果通过子类对象 访问到父类中同名成员，需要加作用域
	cout << "Base下m_A=" << s.Base5::m_A << endl;
}

//同名成员函数处理
void test025()
{
	Son5 s;
	s.func5();//直接调用 调用是子类中的同名成员
	//调用父类中同名成员函数
	s.Base5::func5();
	//如果子类中出现了和父类同名的成员函数，子类的同名成员函数会隐藏掉父类中所有的同名成员函数
	//如果想访问父类中被隐藏的成员函数，需要加作用域
	s.Base5::func5(100);
}
int main5()
{
	//test015();
	test025();
	system("pause");

	return 0;
}