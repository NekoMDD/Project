#include<iostream>
using namespace std;
#include"circle.h"
#include"point.h"

//���Բ�Ĺ�ϵ����

//����
//class Point
//{
//public:
//	//����X
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	//��ȡX
//	int getX()
//	{
//		return m_X;
//	}
//	//����Y
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	//��ȡY
//	int getY()
//	{
//		return m_Y;
//	}
//private:
//	int m_X;
//	int m_Y;
//};
//����Բ��
//class Circle
//{
//public:
//	//���ð뾶
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	//��ȡ�뾶
//	int getR()
//	{
//		return m_R;
//	}
//	//����Բ��
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//	//��ȡԲ��
//	Point getCenter()
//	{
//		return m_Center;
//	}
//private:
//	int m_R;//�뾶
//	Point m_Center;
//};

//�жϵ��԰�Ĺ�ϵ
void isInCircle(Circle& c, Point& p)
{
	//��������֮�����ƽ��
	int distence = ((c.getCenter().getX() - p.getX())* (c.getCenter().getX() - p.getX())) + ((c.getCenter().getY() - p.getY())* (c.getCenter().getY() - p.getY()));
	//����뾶��ƽ��
	int rdistence = c.getR() * c.getR();
	//�ж�֮��Ĺ�ϵ
	if (distence == rdistence)
	{
		cout << "����Բ��" << endl;
	}
	else if (distence > rdistence)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
};

int main6()
{
	//����Բ
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);
	//������
	Point p;
	p.setX(10);
	p.setY(9);
	//�жϹ�ϵ
	isInCircle(c, p);

	system("pause");

	return 0;
}