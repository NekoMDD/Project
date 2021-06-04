#include<iostream>
using namespace std;

//拷贝构造函数调用时机

class Person3
{
public:
	Person3()
	{
		cout << "Person的默认构造函数调用" << endl;
	}
	Person3(int age)
	{
		cout << "Person的有参构造函数调用" << endl;
		m_Age = age;
	}
	Person3(const Person3& p)
	{
		cout << "Person的拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
	}
	~Person3()
	{
		cout << "Person的析构函数调用" << endl;
	}
	int m_Age;
};

//1、使用一个已经创建完毕的对象来初始化一个新对象

void test013()
{
	Person3 p1(20);
	Person3 p2(p1);

	cout << "p2的年龄为：" << p2.m_Age << endl;
}

//2、值传递的方式给函数参数传值

void doWork(Person3 p)
{

}

void test023()
{
	Person3 p;
	doWork(p);
}

//3、值方式返回局部对象

Person3 doWork01()
{
	Person3 p1;
	cout << (int*)&p1 << endl;
	return p1;
}

void test033()
{
	Person3 p = doWork01();
	cout << (int*)&p << endl;
}

int main3()
{
	//test013();
	//test023();
	test033();

	system("pause");

	return 0;
}