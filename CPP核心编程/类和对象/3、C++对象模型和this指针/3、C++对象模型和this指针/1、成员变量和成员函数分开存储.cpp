#include<iostream>
using namespace std;

//��Ա�����ͳ�Ա�����Ƿֿ��洢��

class Person1
{
	int m_A;//�Ǿ�̬��Ա����  ������Ķ����ϵ�  ֻ��

	static int m_B;//��̬��Ա���� ��������Ķ�����

	void func1()//�Ǿ�̬��Ա���� ��Ա�����ͳ�Ա�����Ƿֿ��洢��
	{

	}
};

int Person1::m_B = 0;

void test011()
{
	Person1 p;
	//�ն���ռ���ڴ�ռ�Ϊ:1
	//C++���������ÿ���ն���Ҳ����һ���ֽڵĿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
	cout << "size of p =" << sizeof(p) << endl;
}

void test021()
{
	Person1 p;
	cout << "size of p =" << sizeof(p) << endl;
}

int main1()
{
	test011();
	test021();

	system("pause");

	return 0;
}