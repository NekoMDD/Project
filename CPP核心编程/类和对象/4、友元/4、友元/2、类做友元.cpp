#include<iostream>
using namespace std;

//������Ԫ
class Building2;
class GoodGay2
{
public:
	GoodGay2();

	void visit2();//�ιۺ�������Building�е�����

	Building2* building2;
};

class Building2
{
	friend class GoodGay2;
public:
	Building2();
public:
	string m_SittingRoom;//����
private:
	string m_BedRoom;//����
};

//����д��Ա����
Building2::Building2()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

GoodGay2::GoodGay2()
{
	//�������������
	building2 = new Building2;
}

void GoodGay2::visit2()
{
	cout << "�û��������ڷ��ʣ�" << building2->m_SittingRoom << endl;
	cout << "�û��������ڷ��ʣ�" << building2->m_BedRoom << endl;
}

void test012()
{
	GoodGay2 gg;
	gg.visit2();
}

int main2()
{
	test012();

	system("pause");

	return 0;
}