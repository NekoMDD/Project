#include<iostream>
using namespace std;

//普通实现页面
//class Java
//{
//public:
//	void header()
//	{
//		cout << "首页、登陆、公开课、注册……（公共内容）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图……（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "java、python、C++……（公共分类列表）" << endl;
//	}
//	void content()
//	{
//		cout << "java学科视频" << endl;
//	}
//};
//class Python
//{
//public:
//	void header()
//	{
//		cout << "首页、登陆、公开课、注册……（公共内容）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图……（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "java、python、C++……（公共分类列表）" << endl;
//	}
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
//class CPP
//{
//public:
//	void header()
//	{
//		cout << "首页、登陆、公开课、注册……（公共内容）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图……（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "java、python、C++……（公共分类列表）" << endl;
//	}
//	void content()
//	{
//		cout << "CPP学科视频" << endl;
//	}
//};

//继承实现页面
class BasePage1//公共页面信息
{
public:
		void header()
	{
		cout << "首页、登陆、公开课、注册……（公共内容）" << endl;
	}
	void footer()
	{
		cout << "帮助中心、交流合作、站内地图……（公共底部）" << endl;
	}
	void left()
	{
		cout << "java、python、C++……（公共分类列表）" << endl;
	}
};

//继承的好处：减少重复代码
//语法：class 子类:继承方式 父类
//子类 也称为 派生类
//父类 也称为 基类

//Java页面
class Java1 :public BasePage1
{
public:
	void content()
	{
		cout << "Java学科页面" << endl;
	}
};

//Python页面
class Python1 :public BasePage1
{
public:
	void content()
	{
		cout << "Python学科页面" << endl;
	}
};

//C++页面
class CPP1 :public BasePage1
{
public:
	void content()
	{
		cout << "C++学科页面" << endl;
	}
};

void test011()
{
	cout << "java页面" << endl;
	Java1 ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "-----------------------------" << endl;
	cout << "python页面" << endl;
	Python1 py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "-----------------------------" << endl;
	cout << "C++页面" << endl;
	CPP1 cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
}

int main1()
{
	test011();

	system("pause");

	return 0;
}