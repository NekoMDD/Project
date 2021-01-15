#include<iostream>
using namespace std;

int main22()
{
	//1、为三只小猪输入体重
	int pig1 = 0;
	cout << "请输入小猪1的重量" << endl;
	cin >> pig1;

	int pig2 = 0;
	cout << "请输入小猪2的重量" << endl;
	cin >> pig2;

	int pig3 = 0;
	cout << "请输入小猪3的重量" << endl;
	cin >> pig3;

	//2、打印三只小猪重量

	cout << "小猪1的重量为：" << pig1 << endl;
	cout << "小猪2的重量为：" << pig2 << endl;
	cout << "小猪3的重量为：" << pig3 << endl;

	//3、比较判断三只小猪
	if (pig1 > pig2)
	{
		if (pig1 > pig3)
		{
			cout << "小猪1为最重的" << endl;
		}
		else
		{
			cout << "小猪3为最重的" << endl;
		}
	}
	else
	{
		if (pig2 > pig3)
		{
			cout << "小猪2为最重的" << endl;
		}
		else
		{
			cout << "小猪3为最重" << endl;
		}
	}

	//4、输出
	system("pause");

	return 0;
}