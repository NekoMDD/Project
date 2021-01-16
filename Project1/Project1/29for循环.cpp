#include<iostream>
using namespace std;

int main29()
{

	//for循环
	//从数字0打印到数字9
	for (int i = 0; i < 10; i++)//语法：for(起始表达式;条件表达式;末尾循环体){循环语句;}  起始表达式只执行一次，然后判断条件表达式，执行大括号代码，执行末尾循环体，再返回条件表达式判断是否继续循环
	{
		cout << i << endl;
	}

	//注意：for循环中的表达式要用分号进行分割
	//总结：while，do...while，for都是开发中常用的循环语句，for循环结构比较清晰，比较常用

	system("pause");

	return 0;
}