#include<iostream>
using namespace std;

//�������Ϊ���Ա

//�ֻ���
class Phone7
{
public:
	Phone7(string pName)
	{
		m_PName = pName;
		cout << "Phone�Ĺ��캯������" << endl;
	}
	//Ʒ��
	string m_PName;
};

//����
class Person7
{
public:
	Person7(string name, string pName) :m_Name(name), m_Phone(pName)
	{
		cout << "Person�Ĺ��캯������" << endl;
	}
	//����
	string m_Name;
	//�ֻ�
	Phone7 m_Phone;
};

//�������������Ϊ�����Ա������ʱ�ȹ���������ٹ�������
//����ʱ˳���빹��ʱ�෴

void test017()
{
	Person7 p("����", "iPhone");
	cout << p.m_Name << "����:" << p.m_Phone.m_PName << endl;
}

int main7()
{
	test017();
	system("pause");

	return 0;
}