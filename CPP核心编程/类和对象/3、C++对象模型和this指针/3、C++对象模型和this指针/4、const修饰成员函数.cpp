#include<iostream>
using namespace std;

//������

class Person
{
public:

	//thisָ��ı��� ��ָ�볣��  ָ�볣���ǲ������޸ĵ�
	//const Person*const this;
	//�ڳ�Ա�������const�����ε���thisָ�룬��ָ��ָ���ֵҲ�������޸�
	void showPerson()const
	{
		//this->m_A = 100;
		//this = NULL;//thisָ���ǲ������޸�ָ��ָ���
		this->m_B = 100;
	}

	void func()
	{
		m_A=100;
	}
	int m_A;
	mutable int m_B;//��ʹ�ڳ������У�Ҳ�����޸����ֵ,�ӹؼ���mutable
};
//������

void test02()
{
	const Person p;//�ڶ���ǰ��const����Ϊ������
	//p.m_A = 100;//����δ��mutable���������ڳ������²������޸Ķ����ֵ
	p.m_B = 100;//m_B������ֵ���ڳ�������Ҳ�����޸�

	//������ֻ�ܵ��ó�����
	p.showPerson();
	//p.func;//�����󣬲����Ե�����ͨ�ĳ�Ա��������Ϊ��ͨ��Ա���������޸�����
}

void test01()
{
	Person p;
	p.showPerson();
}

int main()
{

	system("pause");

	return 0;
}