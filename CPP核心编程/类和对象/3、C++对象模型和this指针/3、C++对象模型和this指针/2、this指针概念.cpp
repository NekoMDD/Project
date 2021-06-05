#include<iostream>
using namespace std;

class Person2
{
public:
	Person2(int age)
	{
		//this指针指向的是被调用的成员函数所属的对象
		this->age = age;
	}
	Person2& PersonAddAge(Person2 &p)
	{
		this->age += p.age;

		//this指向p2的指针，而*this指向的就是p2这个对象的本体
		return *this;
	}
	int age;
};

//1、解决名称冲突
void test012()
{
	Person2 p1(18);
	cout << "p1的年龄为：" << p1.age << endl;
}
//2、返回对象本身用*this

void test022()
{
	Person2 p1(10);
	Person2 p2(10);
	//链式编程思想
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	cout << "p2的年龄为：" << p2.age << endl;
}

int main2()
{
	//test012();
	test022();

	system("pause");

	return 0;
}