#include<iostream>
using namespace std;

//���ص��������

//�Զ�������
class MyIntger3
{
	friend ostream& operator<<(ostream& cout, MyIntger3 myint);
public:
	MyIntger3()
	{
		m_Num = 0;
	}

	//����++�������ǰ�õ���
	MyIntger3& operator++()
	{
		m_Num++;
		return *this;
	}
	//����++����������õ���
	MyIntger3 operator++(int)//int����ռλ������������������ǰ�úͺ��õ���
	{
		//�� ��¼��ʱ���
		MyIntger3 temp = *this;
		//�� ����
		m_Num++;
		//��󽫼�¼�Ľ��������
		return temp;
	}

private:
	int m_Num;
};

//�������������
ostream& operator<<(ostream& cout, MyIntger3 myint)
{
	cout << myint.m_Num;
	return cout;
}

void test013()
{
	MyIntger3 myint;
	cout << ++myint << endl;
}

void test023()
{
	MyIntger3 myint;
	cout << myint++ << endl;
	cout << myint << endl;
}

int main3()
{
	//test01();
	test023();

	system("pause");

	return 0;
}