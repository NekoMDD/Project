#include<iostream>
using namespace std;

//��ʼ���б�
class Person6
{
public:
	//Person6(int a, int b, int c)
	//{
	//	m_A = a;
	//	m_B = b;
	//	m_C = c;
	//}

	//��ʼ���б��ʼ������
	Person6(int a,int b,int c) :m_A(a), m_B(b), m_C(c)
	{

	}

	int m_A;
	int m_B;
	int m_C;
};

void test016()
{
	//Person p(10, 20, 30);
	Person6 p(30,20,10);
	cout << "m_A=" << p.m_A << endl;
	cout << "m_B=" << p.m_B << endl;
	cout << "m_C=" << p.m_C << endl;
}

int main6()
{
	test016();

	system("pause");

	return 0;
}