#include<iostream>
using namespace std;

//��̬��Ա����
//1�����ж�����ͬһ������
//2����̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

class Person9
{
public:
	//��̬��Ա����
	static void func9()
	{
		m_A = 100;//��̬��Ա�������Է��ʾ�̬��Ա����
		//m_B = 200;//��̬��Ա���������Է��ʷǾ�̬��Ա����,�޷����ֵ������ĸ������m_B������
		cout << "static void func�ĵ���" << endl;
	}
	static int m_A;//��̬��Ա����
	int m_B;//�Ǿ�̬��Ա����

	//��̬��Ա����Ҳ���з���Ȩ�޵�
private:
	static void func29()
	{
		cout << "static void func2�ĵ���" << endl;
	}
};

int Person9::m_A = 0;

//�����ַ��ʷ�ʽ
void test019()
{
	//1��ͨ���������
	Person9 p;
	p.func9();
	//2��ͨ����������
	Person9::func9();
	//Person::func2();//������ʲ���˽�еľ�̬��Ա����
}

int main9()
{
	test019();

	system("pause");

	return 0;
}