#include<iostream>
using namespace std;

//�������������
class Person2
{
	friend ostream& operator<<(ostream& cout, Person2& p);
	friend void test012();

//public:
//	Person(int a, int b)
//	{
//		m_A = a;
//		m_B = b;
//	}
private:
	//���ó�Ա�����������������
	//�������ó�Ա��������<<���������Ϊ�޷�ʵ��cout�����
	/*void operator<<()*/
	int m_A;
	int m_B;
};

//ֻ������ȫ�ֺ����������������
ostream& operator<<(ostream& cout, Person2& p)//���� operator<<(cout,p) �� cout<<p
{
	cout << "m_A=" << p.m_A << " m_B=" << p.m_B;
	return cout;
}

void test012()
{
	Person2 p;
	p.m_A = 10;
	p.m_B = 10;

	cout << p << endl;
}

int main2()
{
	test012();

	system("pause");

	return 0;
}