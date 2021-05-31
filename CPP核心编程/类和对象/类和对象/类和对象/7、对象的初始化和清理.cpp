#include<iostream>
using namespace std;

//对象的额初始化和清理
//1、构造函数 进行初始化操作
class Person
{
public:
	//1、构造函数
	//没有返回值 不写void
	//函数名 与类名相同
	//构造函数可以有参数，可以发生重载
	//创建对象的时候，构造函数会自动调用，而且只调用一次
	Person()
	{
		cout << "Person 构造函数的调用" << endl;
	}
};


//2、析构函数 进行清理的操作

void test01()
{
	Person p;
};
int main()
{
	test01();

	system("pause");

	return 0;
}