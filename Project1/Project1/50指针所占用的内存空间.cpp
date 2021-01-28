#include<iostream>
using namespace std;

int main50()
{

	//指针所占得内存空间大小
	int a = 10;
	int* p = &a;

	//在32位操作系统下，指针是占4个字节空间大小，不管什么数据类型
	//在64位操作系统下，指针是占8个字节空间大小，不管什么数据类型

	cout << "sizeof (int * =)" << sizeof(p) << endl;

	system("pause");

	return 0;
}