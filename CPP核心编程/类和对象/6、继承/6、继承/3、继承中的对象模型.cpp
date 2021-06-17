#include<iostream>
using namespace std;

//继承中的对象模型

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
	//父类中所有费静态成员都会被子类继承下去
	//父类中私有成员属性 是被编译器隐藏了，因此是访问不到，但是确实被继承了下去
	cout << "size of son = " << sizeof(Son3) << endl;
}

int main3()
{
	test013();

	system("pause");

	return 0;
}