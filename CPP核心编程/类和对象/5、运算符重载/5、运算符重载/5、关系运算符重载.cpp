#include<iostream>
using namespace std;

//���ع�ϵ�����
class Person5
{
public:
	Person5(string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}

	//����==��
	bool operator==(Person5& p)
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{
			return true;
		}
		return false;
	}
	//���أ�=��
	bool operator!=(Person5& p)
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{
			return false;
		}
		return true;
	}

	string m_Name;
	int m_Age;
};

void test015()
{
	Person5 p1("����", 18);

	Person5 p2("����", 19);
	
	if (p1 == p2)
	{
		cout << "p1��p2����ȵ�" << endl;
	}
	else
	{
		cout << "p1��p2�ǲ���ȵ�" << endl;
	}
	if (p1 != p2)
	{
		cout << "p1��p2�ǲ���ȵ�" << endl;
	}
	else
	{
		cout << "p1��p2����ȵ�" << endl;
	}
}

int main5()
{
	test015();

	system("pause");

	return 0;
}