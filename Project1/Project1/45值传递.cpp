#include<iostream>
using namespace std;

//值传递
//定义函数，实现两个数字进行交换的函数

//如果一个函数不需要返回值，生命的时候可以写void
void swap(int num1, int num2)
{
	cout << "交换前：" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;

	int temp = num2;
	num2 = num1;
	num1 = temp;

	cout << "交换后：" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	return;//返回值不需要的时候可以不写teturn
}

int main45()
{

	int a = 10;
	int b = 20;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	//当我们做值传递的时候，函数的形参发生改变并不会影响实参
	swap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");

	return 0;
}