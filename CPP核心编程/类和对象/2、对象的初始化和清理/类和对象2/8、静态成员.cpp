#include<iostream>
using namespace std;

//��̬��Ա����
class Person8
{
public:
	//1�����ж��󶼹���ͬһ������
	//2������׶ξͷ����ڴ�
	//3�����������������ʼ������
	static int m_A;

	//��̬��Ա����Ҳ���з���Ȩ�޵�
private:
	static int m_B;
};

int Person8::m_A = 100;
int Person8::m_B = 200;

void test018()
{
	Person8 p;
	cout << p.m_A << endl;
	Person8 p2;
	p2.m_A = 200;
	cout << p.m_A << endl;
}

void test028()
{
	//��̬��Ա���� ������ĳ�������ϣ����ж��󶼹���ͬһ������
	//��˾�̬��Ա���������ַ��ʷ�ʽ

	//1��ͨ��������з���
	//Person p;
	//cout << p.m_A << endl;
	//2��ͨ���������з���
	cout << Person8::m_A << endl;

	//cout << Person::m_B << endl;//������ʲ���˽�о�̬��Ա����
}

int main8()
{
	//test018();
	test028();
	system("pause");

	return 0;
}