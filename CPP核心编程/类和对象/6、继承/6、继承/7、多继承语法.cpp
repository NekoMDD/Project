#include<iostream>
using namespace std;

//��̳��﷨

class Base017
{
public:
	Base017()
	{
		m_A = 100;
	}
	int m_A;
};

class Base027
{
public:
	Base027()
	{
		m_A = 200;
	}
	int m_A;
};
//���� ��Ҫ�̳�B1��B2
//�﷨��class ���ࣺ�̳з�ʽ ����1���̳з�ʽ ����2...
class Son7:public Base017,public Base027
{
public:
	Son7()
	{
		m_C = 300;
		m_D = 400;
	}
	int m_C;
	int m_D;
};

void test017()
{
	Son7 s;
	cout << "sizeofSon=" << sizeof(s) << endl;
	//�������г���ͬ����Ա����Ҫ������������
	cout << "m_A" << s.Base017::m_A << endl;
	cout << "m_A" << s.Base027::m_A << endl;
}

int main7()
{
	test017();

	system("pause");

	return 0;
}