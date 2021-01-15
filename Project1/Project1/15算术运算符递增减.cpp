#include<iostream>
using namespace std;

int main15()
{
	
	//1、前置递增

	int a = 10;
	++a;//让变量进行加1的操作
	cout << "a=" << a << endl;

	//2、后置递增

	int b = 10;
	b++;
	cout << "b=" << b << endl;

	//3、前置和后置的区别
	//前置递增：先让变量+1然后进行表达式运算

	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << "a2=" << a2 << endl;
	cout << "b2=" << b2 << endl;
	//后置递增：先进行表达式运算再+1

	int a3 = 10;
	int b3 = a3++*10;
	cout << "a3=" << a3 << endl;
	cout << "b3=" << b3 << endl;

	//递减练习
	int c1 = 10;
	int c2 = --c1 * 10;
	cout << "c2=" << c2 << endl;//应该等于90
	int c3 = c1-- * 10;
	cout << "c3=" << c3 << endl;//应该等于90，因为之前一步C1已经被--，所以本次运算的c1初始值为9

	system("pause");

	return 0;
}