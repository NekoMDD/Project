#include<iostream>
using namespace std;

int main7()
{
	//1、单精度 float
	//2、双精度 double
	//默认情况下，输出一个小数，会显示出六位有效数字

	float f1 = 3.1415926f;

	cout << "f1 = " << f1 << endl;

	double d1 = 3.1415926;
	cout << "d1 = " << d1 << endl;

	//统计float和double占用内存空间
	cout << "float占用的内存空间为：" << sizeof(float) << endl;//4字节
	cout << "double占用的内存空间为：" << sizeof(double) << endl;//8字节

	//科学计数法
	float f2 = 3e2;//e后边为正数则代表：3*10^n
	cout << "f2=" << f2 << endl;
	float f3 = 3e-2;//e后边为负数则代表：3*0.1^n
	cout << "f3=" << f3 << endl;

	system("pause");

	return 0;
}