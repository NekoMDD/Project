#include<iostream>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		age = 10;
	}
	int age;
};

//1、解决名称冲突
void test01()
{
	Person p1(18);
	cout << "p1的年龄为：" << p1.age << endl;
}
//2、返回对象本身用*this

int main()
{

	system("pause");

	return 0;
}