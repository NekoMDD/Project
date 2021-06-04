#include<iostream>
using namespace std;

//成员变量和成员函数是分开存储的

class Person1
{
	int m_A;//非静态成员变量  属于类的对象上的  只有

	static int m_B;//静态成员变量 不属于类的对象上

	void func1()//非静态成员函数 成员变量和成员函数是分开存储的
	{

	}
};

int Person1::m_B = 0;

void test011()
{
	Person1 p;
	//空对象占用内存空间为:1
	//C++编译器会给每个空对象也分配一个字节的空间，是为了区分空对象占内存的位置
	//每个空对象也应该有一个独一无二的内存地址
	cout << "size of p =" << sizeof(p) << endl;
}

void test021()
{
	Person1 p;
	cout << "size of p =" << sizeof(p) << endl;
}

int main1()
{
	test011();
	test021();

	system("pause");

	return 0;
}