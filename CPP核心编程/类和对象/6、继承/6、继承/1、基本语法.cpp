#include<iostream>
using namespace std;

//��ͨʵ��ҳ��
//class Java
//{
//public:
//	void header()
//	{
//		cout << "��ҳ����½�������Ρ�ע�ᡭ�����������ݣ�" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ�����������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "java��python��C++���������������б�" << endl;
//	}
//	void content()
//	{
//		cout << "javaѧ����Ƶ" << endl;
//	}
//};
//class Python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ����½�������Ρ�ע�ᡭ�����������ݣ�" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ�����������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "java��python��C++���������������б�" << endl;
//	}
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
//class CPP
//{
//public:
//	void header()
//	{
//		cout << "��ҳ����½�������Ρ�ע�ᡭ�����������ݣ�" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ�����������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "java��python��C++���������������б�" << endl;
//	}
//	void content()
//	{
//		cout << "CPPѧ����Ƶ" << endl;
//	}
//};

//�̳�ʵ��ҳ��
class BasePage1//����ҳ����Ϣ
{
public:
		void header()
	{
		cout << "��ҳ����½�������Ρ�ע�ᡭ�����������ݣ�" << endl;
	}
	void footer()
	{
		cout << "�������ġ�����������վ�ڵ�ͼ�����������ײ���" << endl;
	}
	void left()
	{
		cout << "java��python��C++���������������б�" << endl;
	}
};

//�̳еĺô��������ظ�����
//�﷨��class ����:�̳з�ʽ ����
//���� Ҳ��Ϊ ������
//���� Ҳ��Ϊ ����

//Javaҳ��
class Java1 :public BasePage1
{
public:
	void content()
	{
		cout << "Javaѧ��ҳ��" << endl;
	}
};

//Pythonҳ��
class Python1 :public BasePage1
{
public:
	void content()
	{
		cout << "Pythonѧ��ҳ��" << endl;
	}
};

//C++ҳ��
class CPP1 :public BasePage1
{
public:
	void content()
	{
		cout << "C++ѧ��ҳ��" << endl;
	}
};

void test011()
{
	cout << "javaҳ��" << endl;
	Java1 ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "-----------------------------" << endl;
	cout << "pythonҳ��" << endl;
	Python1 py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "-----------------------------" << endl;
	cout << "C++ҳ��" << endl;
	CPP1 cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
}

int main1()
{
	test011();

	system("pause");

	return 0;
}