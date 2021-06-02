#include<iostream>
using namespace std;

//构造函数的调用规则
//1、创建一个类，cpp编译器会给每个类添加至少三个函数
//默认构造（空实现）
//析构函数（空实现）
//拷贝构造（值拷贝）

//2、如果我们写了有参构造函数，编译器就不再提供默认构造，依然提供拷贝构造
//如果我们写了拷贝构造函数，编译器就不在提供其他构造函数了

class Person1
{
public:
	Person1()
	{
		cout << "Person的默认构造函数调用" << endl;
	}
	Person1(int age)
	{
		m_Age = age;
		cout << "Person的有参构造函数调用" << endl;
	}
	Person1(const Person1&p)
	{
		m_Age = p.m_Age;
		cout << "Person的拷贝构造函数调用" << endl;
	}
	~Person1()
	{
		cout << "Person的析构函数调用" << endl;
	}
	int m_Age;
};

//void test011()
//{
//	Person p;
//	p.m_Age = 18;
//	Person p2(p);
//	cout << "p2的年龄为：" << p2.m_Age << endl;
//}

void test021()
{
	Person1 p;
	//Person p2(p);
	//cout << "p2的年龄为：" << p2.m_Age << endl;
}

int main1()
{
	//test011();
	test021();
	system("pause");

	return 0;
}