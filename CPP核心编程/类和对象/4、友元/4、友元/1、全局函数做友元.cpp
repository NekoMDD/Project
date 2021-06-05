#include<iostream>
using namespace std;

class Building1
{
	friend void goodGay1(Building1* building1);//goodGay全局函数是Building的好朋友，可以访问Building中的私有成员
public:
	Building1()
	{
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}
public:
	string m_SittingRoom;//客厅
private:
	string m_BedRoom;//卧室
};

//全局函数
void goodGay1(Building1 *building1)
{
	cout << "好基友的全局函数 正在访问：" << building1->m_SittingRoom << endl;
	cout << "好基友的全局函数 正在访问：" << building1->m_BedRoom << endl;
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