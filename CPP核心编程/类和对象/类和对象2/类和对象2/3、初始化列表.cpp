#include<iostream>
using namespace std;

//初始化列表
class Person3
{
public:
	//Person(int a, int b, int c)
	//{
	//	m_A = a;
	//	m_B = b;
	//	m_C = c;
	//}

	//初始化列表初始化属性
	Person3(int a,int b,int c) :m_A(a), m_B(b), m_C(c)
	{

	}

	int m_A;
	int m_B;
	int m_C;
};

void test013()
{
	//Person p(10, 20, 30);
	Person3 p(30,20,10);
	cout << "m_A=" << p.m_A << endl;
	cout << "m_B=" << p.m_B << endl;
	cout << "m_C=" << p.m_C << endl;
}

int main3()
{
	test013();

	system("pause");

	return 0;
}