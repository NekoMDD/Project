#include<iostream>
using namespace std;

const double pi = 3.14;//Բ����
//���һ��Բ�࣬��Բ���ܳ�
//Բ���ܳ��Ĺ�ʽ��2��r
//class �������һ���࣬���߽����ŵľ���������
class Circle
{
	//����Ȩ��
public:      //����Ȩ��
	//����
	int m_r; //�뾶
	//��Ϊ
	//��ȡԲ���ܳ�
	double clculateZC()
	{
		return 2 * pi * m_r;
	}
};
class Student
{
public:

	string name;
	int num;
	void SC()
	{
		cout << "������" << name << " ѧ�ţ�" << num << endl;
	}
	//��������ֵ
	void setname(string name1)
	{
		name = name1;
	}
};


int main1()
{
	//ͨ��Բ�ഴ�������Բ������
	//ʵ������ͨ��һ���� ����һ������Ĺ���
	Circle c1;
	//��Բ���� �����Խ��и�ֵ
	c1.m_r = 10;
	
	Student s1;
	s1.name = "����";
	s1.num = 1;
	s1.SC();
	Student s2;
	s2.setname("����");
	s2.num = 2;
	s2.SC();

	cout << "Բ���ܳ�Ϊ��" << c1.clculateZC() << endl;

	system("pause");

	return 0;
}