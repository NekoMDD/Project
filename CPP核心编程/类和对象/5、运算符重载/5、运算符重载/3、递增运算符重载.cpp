#include<iostream>
using namespace std;

//重载递增运算符

//自定义整型
class MyIntger3
{
	friend ostream& operator<<(ostream& cout, MyIntger3 myint);
public:
	MyIntger3()
	{
		m_Num = 0;
	}

	//重载++运算符：前置递增
	MyIntger3& operator++()
	{
		m_Num++;
		return *this;
	}
	//重载++运算符：后置递增
	MyIntger3 operator++(int)//int代表占位参数，可以用于区分前置和后置递增
	{
		//先 记录当时结果
		MyIntger3 temp = *this;
		//后 递增
		m_Num++;
		//最后将记录的结果作返回
		return temp;
	}

private:
	int m_Num;
};

//重载左移运算符
ostream& operator<<(ostream& cout, MyIntger3 myint)
{
	cout << myint.m_Num;
	return cout;
}

void test013()
{
	MyIntger3 myint;
	cout << ++myint << endl;
}

void test023()
{
	MyIntger3 myint;
	cout << myint++ << endl;
	cout << myint << endl;
}

int main3()
{
	//test01();
	test023();

	system("pause");

	return 0;
}