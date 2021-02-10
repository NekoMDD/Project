#include<iostream>
using namespace std;

//函数重载的注意事项
//1、引用作为重载的条件
void func(int& a)
{
	cout << "func(int& a)的调用" << endl;
}

void func(const int& a)
{
	cout << "func(const int& a)的调用" << endl;
}


//2、函数重载碰到默认参数
void func2(int a, int b = 10)
{
	cout << "func2(int a,int b)的调用" << endl;
}

void func2(int a)
{
	cout << "func2(int a)的调用" << endl;
}
int main4()
{
	//int a = 10;
	//func(a);
	//func(10);

	//func2(10);//当函数重载碰到默认参数，会出现二义性，报错，尽量避免这种写法


	system("pause");

	return 0;
}