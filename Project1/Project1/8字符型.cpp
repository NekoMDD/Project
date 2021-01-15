#include<iostream>
using namespace std;

int main8()
{

	//1、字符型变量创建方式
	char ch = 'A';
	cout << ch << endl;

	//2、字符型变量所占的内存大小
	cout << "字符型变量所占内存大小：" << sizeof(char) << endl;

	//3、字符型变量常见错误
	//char ch2 = "b";//创建字符型变量时，要用单引号
	//char ch2 = 'abcdef';//创建字符型变量，单引号内只能有一个字符

	//4、字符型变量对应ASCII编码
	//a对应97
	//A对应65
	cout << (int)ch << endl;//强转int

	system("pause");

	return 0;
}