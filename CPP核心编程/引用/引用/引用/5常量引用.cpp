#include<iostream>
using namespace std;

//打印数据的函数
void showValue(const int& val)
{
	//val = 1000;
	cout << "val=" << val << endl;
}

int main()
{

	//常量引用
	//使用场景：用来修饰形参，防止误操作
	//int a = 10;
	//const int& ref = 10;//引用必须引一块儿合法的内存空间
	//加const之后 编译器将代码修改为：int temp = 10;const int & ref = temp;
	//ref = 20;//加入const之后变为只读状态，不可修改

	int a = 100;
	showValue(a);

	cout << "a=" << a << endl;

	system("pause");

	return 0;
}