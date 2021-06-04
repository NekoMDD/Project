#include<iostream>
using namespace std;

//类对象作为类成员

//手机类
class Phone7
{
public:
	Phone7(string pName)
	{
		m_PName = pName;
		cout << "Phone的构造函数调用" << endl;
	}
	//品牌
	string m_PName;
};

//人类
class Person7
{
public:
	Person7(string name, string pName) :m_Name(name), m_Phone(pName)
	{
		cout << "Person的构造函数调用" << endl;
	}
	//姓名
	string m_Name;
	//手机
	Phone7 m_Phone;
};

//当其他类对象作为本类成员，构造时先构造类对象，再构造自身
//析构时顺序与构造时相反

void test017()
{
	Person7 p("张三", "iPhone");
	cout << p.m_Name << "拿着:" << p.m_Phone.m_PName << endl;
}

int main7()
{
	test017();
	system("pause");

	return 0;
}