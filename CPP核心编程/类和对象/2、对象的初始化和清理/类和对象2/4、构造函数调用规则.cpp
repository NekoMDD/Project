#include<iostream>
using namespace std;

//���캯���ĵ��ù���
//1������һ���࣬cpp���������ÿ�������������������
//Ĭ�Ϲ��죨��ʵ�֣�
//������������ʵ�֣�
//�������죨ֵ������

//2���������д���вι��캯�����������Ͳ����ṩĬ�Ϲ��죬��Ȼ�ṩ��������
//�������д�˿������캯�����������Ͳ����ṩ�������캯����

class Person4
{
public:
	Person4()
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}
	Person4(int age)
	{
		m_Age = age;
		cout << "Person���вι��캯������" << endl;
	}
	Person4(const Person4&p)
	{
		m_Age = p.m_Age;
		cout << "Person�Ŀ������캯������" << endl;
	}
	~Person4()
	{
		cout << "Person��������������" << endl;
	}
	int m_Age;
};

//void test014()
//{
//	Person p;
//	p.m_Age = 18;
//	Person p2(p);
//	cout << "p2������Ϊ��" << p2.m_Age << endl;
//}

void test024()
{
	Person4 p;
	//Person p2(p);
	//cout << "p2������Ϊ��" << p2.m_Age << endl;
}

int main4()
{
	//test011();
	test024();
	system("pause");

	return 0;
}