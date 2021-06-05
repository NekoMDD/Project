#include<iostream>
using namespace std;

//常函数

class Person
{
public:

	//this指针的本质 是指针常量  指针常量是不可以修改的
	//const Person*const this;
	//在成员函数后加const，修饰的是this指针，让指针指向的值也不可以修改
	void showPerson()const
	{
		//this->m_A = 100;
		//this = NULL;//this指针是不可以修改指针指向的
		this->m_B = 100;
	}

	void func()
	{
		m_A=100;
	}
	int m_A;
	mutable int m_B;//即使在场函数中，也可以修改这个值,加关键字mutable
};
//常对象

void test02()
{
	const Person p;//在对象前加const，变为常对象
	//p.m_A = 100;//变量未用mutable修饰所以在常对象下不可以修改对象的值
	p.m_B = 100;//m_B是特殊值，在常对象下也可以修改

	//常对象只能调用常函数
	p.showPerson();
	//p.func;//常对象，不可以调用普通的成员函数，因为普通成员函数可以修改属性
}

void test01()
{
	Person p;
	p.showPerson();
}

int main()
{

	system("pause");

	return 0;
}