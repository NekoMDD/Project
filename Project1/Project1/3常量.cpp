#include<iostream>
using namespace std;

//常量的定义方式
//1、#define 宏常量(宏常量通常定义在文件的上方) #define 常量名称 常量值
//2、const修饰的变量

//1、#define 宏常量
#define Day 7

int main3() 
{
	cout << "一周总共有：" << Day << "天" << endl;

	//2、const修饰的变量
	const int month = 12;
	//month = 24;//错误，const修饰的变量也称为常量（用const修饰变量）
	cout << "一年总共有：" << month << "个月份" << endl;
	system("pause");

	return 0;
}