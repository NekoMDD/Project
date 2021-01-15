#include<iostream>
using namespace std;

 //标识符的命名规则
//1、标识符不可以是关键字
//2、标识符是由字母、数字、下划线构成的
//3、标识符第一个字符不能是数字
//4、标识符名称区分大小写
int main4()
{
	//1、标识符不可以是关键字
	//int int = 10

	//2、标识符是由字母、数字、下划线构成的
	//int abc = 10;
	//int _abc = 20;

	//3、标识符第一个字符不能是数字
	//int 123 = 30

	//4、标识符名称区分大小写
	int aaa = 100;
	//cout << AAA << endl;//AAA和aaa不是同一个名称

	//建议：给变量起名的时候，最好能够做到见名知意

	int 数字1 = 10;
	int 数字2 = 20;
	int 求和 = 数字1 + 数字2;
	cout << 求和 << endl;
	system("pause");

	return 0;

}