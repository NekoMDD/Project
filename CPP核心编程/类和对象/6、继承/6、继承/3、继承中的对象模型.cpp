#include<iostream>
using namespace std;

//�̳��еĶ���ģ��

class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son3 :public Base3
{
public:
	int m_D;
};

void test013()
{
	//���������зѾ�̬��Ա���ᱻ����̳���ȥ
	//������˽�г�Ա���� �Ǳ������������ˣ�����Ƿ��ʲ���������ȷʵ���̳�����ȥ
	cout << "size of son = " << sizeof(Son3) << endl;
}

int main3()
{
	test013();

	system("pause");

	return 0;
}