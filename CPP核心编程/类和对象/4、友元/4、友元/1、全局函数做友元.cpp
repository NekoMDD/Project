#include<iostream>
using namespace std;

class Building1
{
	friend void goodGay1(Building1* building1);//goodGayȫ�ֺ�����Building�ĺ����ѣ����Է���Building�е�˽�г�Ա
public:
	Building1()
	{
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}
public:
	string m_SittingRoom;//����
private:
	string m_BedRoom;//����
};

//ȫ�ֺ���
void goodGay1(Building1 *building1)
{
	cout << "�û��ѵ�ȫ�ֺ��� ���ڷ��ʣ�" << building1->m_SittingRoom << endl;
	cout << "�û��ѵ�ȫ�ֺ��� ���ڷ��ʣ�" << building1->m_BedRoom << endl;
}
void test011()
{
	Building1 building;
	goodGay1(&building);
}

int main1()
{
	test011();

	system("pause");

	return 0;
}