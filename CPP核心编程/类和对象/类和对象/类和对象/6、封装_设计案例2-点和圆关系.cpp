#include<iostream>
using namespace std;
#include"circle.h"
#include"point.h"

//点和圆的关系案例

//点类
//class Point
//{
//public:
//	//设置X
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	//获取X
//	int getX()
//	{
//		return m_X;
//	}
//	//设置Y
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	//获取Y
//	int getY()
//	{
//		return m_Y;
//	}
//private:
//	int m_X;
//	int m_Y;
//};
//创建圆类
//class Circle
//{
//public:
//	//设置半径
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	//获取半径
//	int getR()
//	{
//		return m_R;
//	}
//	//设置圆心
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//	//获取圆心
//	Point getCenter()
//	{
//		return m_Center;
//	}
//private:
//	int m_R;//半径
//	Point m_Center;
//};

//判断点和园的关系
void isInCircle(Circle& c, Point& p)
{
	//计算两点之间距离平方
	int distence = ((c.getCenter().getX() - p.getX())* (c.getCenter().getX() - p.getX())) + ((c.getCenter().getY() - p.getY())* (c.getCenter().getY() - p.getY()));
	//计算半径的平方
	int rdistence = c.getR() * c.getR();
	//判断之间的关系
	if (distence == rdistence)
	{
		cout << "点在圆上" << endl;
	}
	else if (distence > rdistence)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
};

int main()
{
	//创建圆
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);
	//创建点
	Point p;
	p.setX(10);
	p.setY(9);
	//判断关系
	isInCircle(c, p);

	system("pause");

	return 0;
}