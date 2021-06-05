#include<iostream>
using namespace std;

//类做友元
class Building2;
class GoodGay2
{
public:
	GoodGay2();

	void visit2();//参观函数访问Building中的属性

	Building2* building2;
};

class Building2
{
	friend class GoodGay2;
public:
	Building2();
public:
	string m_SittingRoom;//客厅
private:
	string m_BedRoom;//卧室
};

//类外写成员函数
Building2::Building2()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGay2::GoodGay2()
{
	//创建建筑物对象
	building2 = new Building2;
}

void GoodGay2::visit2()
{
	cout << "好基友类正在访问：" << building2->m_SittingRoom << endl;
	cout << "好基友类正在访问：" << building2->m_BedRoom << endl;
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