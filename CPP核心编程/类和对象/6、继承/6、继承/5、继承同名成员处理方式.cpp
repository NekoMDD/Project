#include<iostream>
using namespace std;

//�̳���ͬ����Ա����
class Base5
{
public:
	Base5()
	{
		m_A = 100;
	}

	void func5()
	{
		cout << "Base-func����" << endl;
	}
	void func5(int a)
	{
		cout << "Base-func(int a)����" << endl;
	}
	int m_A;
};

class Son5 :public Base5
{
public:
	Son5()
	{
		m_A = 200;
	}

	void func5()
	{
		cout << "Son-func����" << endl;
	}
	int m_A;
};

//ͬ����Ա���Դ���
void test015()
{
	Son5 s;
	cout << "Son��m_A=" << s.m_A << endl;
	//���ͨ��������� ���ʵ�������ͬ����Ա����Ҫ��������
	cout << "Base��m_A=" << s.Base5::m_A << endl;
}

//ͬ����Ա��������
void test025()
{
	Son5 s;
	s.func5();//ֱ�ӵ��� �����������е�ͬ����Ա
	//���ø�����ͬ����Ա����
	s.Base5::func5();
	//��������г����˺͸���ͬ���ĳ�Ա�����������ͬ����Ա���������ص����������е�ͬ����Ա����
	//�������ʸ����б����صĳ�Ա��������Ҫ��������
	s.Base5::func5(100);
}
int main5()
{
	//test015();
	test025();
	system("pause");

	return 0;
}