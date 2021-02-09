#include<iostream>
using namespace std;

int* func1()
{
	//利用new关键字  可以将数据开辟到堆区
	//int a = 10;
	//return &a;

	//指针本质也是局部变量，放在栈上，指针保存的数据是放在堆区的
	int* p = new int(10);
	return p;
}

int main3()
{
	//在堆区开辟数据
	int* p = func1();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

	system("pause");

	return 0;
}