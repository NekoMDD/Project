#include<iostream>
using namespace std;

//1、构造函数的分类及调用
//分类
//1、按照参数分类 无参构造（默认构造）和有参构造
//2、按照类型分类 普通构造和拷贝构造
class Person2
{
public:
	Person2()
	{
		cout << "Person的无参构造函数调用" << endl;
	}
	Person2(int a)
	{
		age = a;
		cout << "Person的有参构造函数调用" << endl;
	}
	//拷贝构造函数
	Person2(const Person2& p)
	{
		//将传入的人身上的所有属性，拷贝到我身上
		age = p.age;
		cout << "Person的拷贝构造函数调用" << endl;
	}
	~Person2()
	{
		cout << "Person的析构函数调用" << endl;
	}
	int age;
};

//调用
void test012()
{
	//1、括号法
	//Person p1;//默认构造函数调用 不要加（）
	//Person p2(10);//有参构造函数
	//Person p3(p2);//拷贝构造函数的调用

	//注意事项1
	//调用默认构造函数时，不要加“（）”
	//加了括号，编译器会认为是一个函数的声明，不会认为在创建对象
	//cout << "p2的年龄为：" << p2.age << endl;
	//cout << "p3的年龄为：" << p3.age << endl;

	//2、显示法
	Person2 p1;
	Person2 p2 = Person2(10);//有参构造
	Person2 p3 = Person2(p2);//拷贝构造

	//Person(10);//放在等号右侧叫匿名对象  特点：当前行执行结束后，系统会立即回收掉匿名对象
	//cout << "aa" << endl;

	//注意事项2
	//不要利用拷贝构造函数来初始化一个匿名对象   编译器会认为Person（p3）=== Person p3（重定义）对象声明

	//3、隐式转换法
	Person2 p4 = 10;//相当于写了Person p4= Person(10)
	Person2 p5 = p4;//拷贝构造
}

int main2()
{
	test012();

	system("pause");

	return 0;
}