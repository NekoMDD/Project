#include<iostream>
using namespace std;

//��Ա��������Ϊ˽��
//1�������Լ����ƶ�дȨ��
//2������д���Լ�����ݵ���Ч��

class Person
{
public:
	//��������
	void setName(string name)
	{
		m_Name = name;
	}
	//��ȡ����
	string getNmame()
	{
		return m_Name;
	}
	//��������
	void setAge(int age)
	{
		if (age<0||age>150)
		{
			m_Age = 0;
			cout << "�����������" << endl;
			return;
		}
		m_Age = age;
	}
	//��ȡ����
	int getAge()
	{
		return m_Age;
	}
	//��������
	void setLover(string lover)
	{
		m_Lover = lover;
	}
private:
	//����
	string m_Name;
	//����
	int m_Age;
	//����
	string m_Lover;
};
int main4()
{
	Person p;
	p.setName("����");
	cout << "������" << p.getNmame() << endl;
	p.setAge(18);
	cout << "���䣺" << p.getAge() << endl;
	p.setLover("�Ծ�");

	system("pause");

	return 0;
}