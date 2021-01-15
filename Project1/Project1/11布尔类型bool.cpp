#include<iostream>
using namespace std;

int main11()
{

	//1、创建bool数据类型
	bool flag = true;//true代表真
	cout << flag << endl;
	
	flag = false;//false代表假
	cout << flag << endl;

	//本质上1代表真的值 0代表假

	//2、查看bool类型所占内存空间
	cout << "布尔类型所占的内存空间：" << sizeof(flag) << endl;
	system("pause");

	return 0;
}