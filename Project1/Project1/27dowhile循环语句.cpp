#include<iostream>
using namespace std;

int main()
{
	//do...while语句
	//在屏幕中输出0~9这是个数字
	int num = 0;
	do
	{
		cout << num << endl;
		num++;
	} while (num < 10);
	
	//do...while与while的区别是do...while会先执行一次循环语句再判断是否满足循环条件
	system("pause");

	return 0;
}