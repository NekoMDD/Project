#include<iostream>
using namespace std;

//����Ķ��ʼ��������
//1�����캯�� ���г�ʼ������
class Person
{
public:
	//1�����캯��
	//û�з���ֵ ��дvoid
	//������ ��������ͬ
	//���캯�������в��������Է�������
	//���������ʱ�򣬹��캯�����Զ����ã�����ֻ����һ��
	Person()
	{
		cout << "Person ���캯���ĵ���" << endl;
	}
};


//2���������� ��������Ĳ���

void test01()
{
	Person p;
};
int main()
{
	test01();

	system("pause");

	return 0;
}