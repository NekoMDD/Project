#include<iostream>
using namespace std;

//���캯���ĵ��ù���
//1������һ���࣬cpp���������ÿ�������������������
//Ĭ�Ϲ��죨��ʵ�֣�
//������������ʵ�֣�
//�������죨ֵ������

//2���������д���вι��캯�����������Ͳ����ṩĬ�Ϲ��죬��Ȼ�ṩ��������
//�������д�˿������캯�����������Ͳ����ṩ�������캯����

class Person1
{
public:
	Person1()
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}
	Person1(int age)
	{
		m_Age = age;
		cout << "Person���вι��캯������" << endl;
	}
	Person1(const Person1&p)
	{
		m_Age = p.m_Age;
		cout << "Person�Ŀ������캯������" << endl;
	}
	~Person1()
	{
		cout << "Person��������������" << endl;
	}
	int m_Age;
};

//void test011()
//{
//	Person p;
//	p.m_Age = 18;
//	Person p2(p);
//	cout << "p2������Ϊ��" << p2.m_Age << endl;
//}

void test021()
{
	Person1 p;
	//Person p2(p);
	//cout << "p2������Ϊ��" << p2.m_Age << endl;
}

int main1()
{
	//test011();
	test021();
	system("pause");

	return 0;
}