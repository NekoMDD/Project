#include<iostream>
using namespace std;

class Building;
class GoodGay
{
public:
	GoodGay();

	void visit();//��visit�������Է���Building�е�˽�к���
	void visit2();//��visit2���������Է���Building�е�˽�к���

	Building* building;
};

class Building
{
	friend void GoodGay::visit();//���߱�����GoodGay���µ�visit��Ա������Ϊ����ĺ����ѣ����Է���˽�г�Ա
public:
	Building();
public:
	string m_sittingRoom;
private:
	string m_BedRoom;
};

//����ʵ�ֳ�Ա����
Building::Building()
{
	m_sittingRoom = "����";
	m_BedRoom = "����";
}

GoodGay::GoodGay()
{
	building = new Building;
}

void GoodGay::visit()
{
	cout << "visit�������ڷ��ʣ�" << building->m_sittingRoom << endl;
	cout << "visit�������ڷ��ʣ�" << building->m_BedRoom << endl;
}

void GoodGay::visit2()
{
	cout << "visit2�������ڷ��ʣ�" << building->m_sittingRoom << endl;
	//cout << "visit2�������ڷ��ʣ�" << building->m_BedRoom << endl;
}

void test01()
{
	GoodGay gg;
	gg.visit();
	gg.visit2();
}

int main()
{
	test01();

	system("pause");

	return 0;
}