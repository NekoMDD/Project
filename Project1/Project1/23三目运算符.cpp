#include<iostream>
using namespace std;

int main23()
{

	//三目运算符 语法：表达式1 ? 表达式2 : 表达式3  过表达式为真，则返回表达式2，否则返回表达式3
	//创建三个变量a、b、c
	//将ab比较，将变量大的值赋值给变量c
	int a = 10;
	int b = 20;
	int c = 0;

	c = (a > b ? a : b);
	cout << "c=" << c << endl;
	//在c++中三目运算符返回的是变量，可以继续赋值
	(a > b ? a : b) = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");

	return 0;
}