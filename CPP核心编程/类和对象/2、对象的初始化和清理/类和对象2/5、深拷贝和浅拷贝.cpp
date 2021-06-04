#include<iostream>
using namespace std;

//深拷贝与浅拷贝
//如果属性又在堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题

class Person5
{
public:
	Person5()
	{
		cout << "Person的默认构造函数调用" << endl;
	}
	Person5(int age,int height)
	{
		m_Age = age;
		m_Height = new int(height);
		cout << "Person的有参构造函数调用" << endl;
	}

	//自己实现拷贝构造函数，解决浅拷贝带来的问题
	Person5(const Person5& p)
	{
		cout << "Person的拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height;编译器默认实现就是这行代码
		m_Height = new int(*p.m_Height);
	}

	~Person5()
	{
		//析构代码，将堆区开辟的数据做释放处理
		if (m_Height!=NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person的析构函数调用" << endl;
	}
	int m_Age;//年龄
	int* m_Height;//身高
};

void test015()
{
	Person5 p1(18,160);
	cout << "p1的年龄为：" << p1.m_Age << " 身高为：" << *p1.m_Height << endl;
	Person5 p2(p1);
	cout << "p2的年龄为：" << p2.m_Age << " 身高为：" << *p2.m_Height << endl;
}

int main5()
{
	test015();

	system("pause");

	return 0;
}