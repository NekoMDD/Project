#include<iostream>
using namespace std;

//�������Ϊ���Ա

//�ֻ���
class Phone
{
public:
	Phone(string pName)
	{
		m_PName = pName;
		cout << "Phone�Ĺ��캯������" << endl;
	}
	//Ʒ��
	string m_PName;
};

//����
class Person
{
public:
	Person(string name, string pName) :m_Name(name), m_Phone(pName)
	{
		cout << "Person�Ĺ��캯������" << endl;
	}
	//����
	string m_Name;
	//�ֻ�
	Phone m_Phone;
};

//�������������Ϊ�����Ա������ʱ�ȹ���������ٹ�������
//����ʱ˳���빹��ʱ�෴

void test01()
{
	Person p("����", "iPhone");
	cout << p.m_Name << "����:" << p.m_Phone.m_PName << endl;
}

int main()
{
	test01();
	system("pause");

	return 0;
}