#include<iostream>
using namespace std;

//����Ȩ��
//����Ȩ�� public     ��Ա���ڿ��Է��ʣ�����Ҳ���Է���
//����Ȩ�� protected  ��Ա���ڿ��Է��ʣ����ⲻ���Է��� ����Ҳ���Է��ʸ����еı�������
//˽��Ȩ�� private    ��Ա������Է��ʣ����ⲻ���Է��� ���಻���Է��ʸ����еı�������
class Person1
{
	//����Ȩ��
public:
	string m_Name;
	//����Ȩ��
protected:
	string m_Car;
	//˽��Ȩ��
private:
	int m_Password;
public:
	void func()
	{
		m_Name = "����";
		m_Car = "������";
		m_Password = 123456;
	}
};

int main2()
{
	Person1 p1;
	p1.m_Name = "����";
	//p1.m_Car = "����";//����Ȩ�޵�������������ʲ���
	//p1.m_Password = 123;//˽��Ȩ��������������ʲ���

	p1.func();

	system("pause");

	return 0;
}