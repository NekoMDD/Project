#include<iostream>
using namespace std;

//�̳��еĹ��������˳��
class Base4
{
public:
	Base4()
	{
		cout << "Base�Ĺ��캯��" << endl;
	}
	~Base4()
	{
		cout << "Base����������" << endl;
	}
};

class Son4 :public Base4
{
public:
	Son4()
	{
		cout << "Son�Ĺ��캯��" << endl;
	}
	~Son4()
	{
		cout << "Son����������" << endl;
	}
};

void test014()
{
	//Base b;
	//�̳��еĹ��������˳�����£�
	//�ȹ��츸�࣬�ٹ������࣬������˳���빹��˳���෴
	Son4 s;
}

int main4()
{
	test014();

	system("pause");

	return 0;
}