#include<iostream>
using namespace std;

//�̳��е�ͬ����̬��Ա����ʽ
class Base6
{
public:
	static int m_A;

	static void func6()
	{
		cout << "Base��static void func����" << endl;
	}
};
int Base6::m_A = 100;

class Son :public Base6
{
public:
	static int m_A;
	static void func6()
	{
		cout << "Son��static void func����" << endl;
	}
};
int Son::m_A = 200;

void test016()
{
	//1��ͨ���������
	cout << "ͨ���������" << endl;
	Son s6;
	cout << "Son��m_A=" << s6.m_A << endl;
	cout << "Base��m_A = " << s6.Base6::m_A << endl;
	//2��ͨ����������
	cout << "ͨ����������" << endl;
	cout << "Son��m_A" << Son::m_A << endl;
	//��һ��::����ͨ��������ʽ���� �ڶ���::������ʸ�����������
	cout << "Base��m_A" << Son::Base6::m_A << endl;
}

//ͬ����̬��Ա����
void test026()
{
	//1��ͨ���������
	Son s6;
	s6.func6();
	s6.Base6::func6();
	//2��ͨ����������
	Son::func6();
	Son::Base6::func6();
	//������ֺ͸���ͬ����̬��Ա������Ҳ�����ظ���������ͬ����Ա����
	//�������ʸ����б����ص�ͬ����Ա����Ҫ��������
}


int main6()
{
	//test01();
	test026();

	system("pause");

	return 0;
}