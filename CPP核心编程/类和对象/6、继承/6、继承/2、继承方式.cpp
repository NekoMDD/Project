#include<iostream>
using namespace std;

//�̳з�ʽ
//�����̳�
class Base12
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son12 :public Base12//�����̳�
{
public:
	void func()
	{
		m_A = 10;//�����еĹ���Ȩ�޳�Ա ����������Ȼ�ǹ���Ȩ��
		m_B = 10;//�����еı���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ��
		//m_C = 10;//�����е�˽��Ȩ�޳�Ա ������ʲ���
	}
};

void test012()
{
	Son12 s1;
	s1.m_A = 100;
	//s1.m_B = 100;//��son1��m_B�Ǳ���Ȩ�� ������ʲ���Ŷ
}

//�����̳�
class Base22
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son22 :protected Base22
{
public:
	void func()
	{
		m_A = 100;//�����й�����Ա���������б�Ϊ����Ȩ��
		m_B = 100;//�����б�����Ա���������������Ǳ���Ȩ��
		//m_C = 100;//������ʲ���˽�г�Ա
	}
};

void test022()
{
	Son22 s1;
	//s1.m_A = 100;//��Son2��m_A��Ϊ����Ȩ�ޣ����������ʲ���
}

class Base32
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son32 :private Base32
{
public:
	void func()
	{
		m_A = 100;//�����й�����Ա�������б�Ϊ˽�г�Ա
		m_B = 100;//�����б�����Ա�������б�Ϊ˽�г�Ա
		//m_C = 100;
	}
};

void test032()
{
	Son32 s1;
	//s1.m_A = 1000;//��Son3�У���Ϊ˽�г�Ա�����ʲ���
}

int main2()
{

	system("pause");

	return 0;
}