#include<iostream>
using namespace std;

//��ָ����ó�Ա����
class Person3
{
public:

	void showClassName()
	{
		cout << "this is Person class" << endl;
	}

	void showPersonAge()
	{
		//����ԭ������Ϊ�����ָ��ΪNULL
		if (this == NULL)
		{
			return;
		}
		cout << "Age=" << m_Age << endl;
	}

	int m_Age;
};

void test013()
{
	Person3* p = NULL;
	p->showClassName();
	p->showPersonAge();
}

int main3()
{
	test013();

	system("pause");

	return 0;
}