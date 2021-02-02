#include<iostream>
using namespace std;
#define MAX 1000

//设计联系人结构体
struct Person
{
	string m_Nmame;//姓名
	int m_Sex;//性别 1、男  2、女
	int m_age;//年龄
	string m_phone;//电话
	string m_Addr;//住址
};

//设计通讯录结构体
struct Addressbooks
{
	//通讯录中保存的联系人数组
	struct Person personArray[MAX];

	//通讯录中当前记录联系人个数
	int m_Size;
};

//1、添加联系人
void addPerson(Addressbooks* abs)
{
	//判断通讯录是否已满
	if (abs->m_Size==MAX)
	{
		cout << "通讯录已满，无法添加！" << endl;
		return;
	}
	else
	{
		//添加具体联系人

		//姓名
		string name;
		cout << "请输入姓名： " << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Nmame = name;
		//性别
		cout << "请输入性别：" << endl;
		cout << "1---男" << endl;
		cout << "2---女" << endl;
		int sex = 0;
		
		while (true)
		{
			//如果输入的是1或者2可以退出循环，因为输入值正确
			//如果输入有误，重新输入
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入！" << endl;
		}

		//年龄
		cout << "请输入年龄： " << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_age = age;

		//电话
		cout << "请输入联系电话： " << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_phone = phone;

		//住址
		cout << "请输入家庭住址： " << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//更新通讯录人数
		abs->m_Size++;
		cout << "添加成功！" << endl;

		system("pause");
		system("cls");//清屏操作
	}
}

//2、显示所有的联系人
void showPerson(Addressbooks* abs)
{
	//判断通讯录中人数是否为零，如果为0，提示记录为空
	//如果不为0，显示记录的联系人信息
	if (abs->m_Size==0)
	{
		cout << "当前记录为空！" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名：" << abs->personArray[i].m_Nmame << "\t";
			cout << "性别：" << (abs->personArray[i].m_Sex == 1 ? "男" : "女") << "\t";//使用三目运算符更加快捷的对男女做出判断并打印，不需要if循环那么麻烦
			cout << "年龄：" << abs->personArray[i].m_age << "\t";
			cout << "电话：" << abs->personArray[i].m_phone << "\t";
			cout << "地址：" << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}

//检测联系人是否存在，如果存在，返回联系人所在数组中的具体位置，不存在返回-1
int isExist(Addressbooks* abs, string name)//参数1代表传入一个通讯录，参数2代表对比的姓名
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Nmame==name)//找到用户输入的姓名
		{
			return i;//找到了，返回这个人在数组中的下标编号
		}
	}
	return -1;//如果遍历结束都没找到，返回-1
}

//3、删除指定的联系人
void deletePerson(Addressbooks* abs)
{
	cout << "请输入您要删除的联系人：" << endl;

	string name;
	cin >> name;

	int ret = isExist(abs, name);//ret==-1说明没查到，ret！=-1说明查到了

	if (ret!=-1)
	{
		//查找到人，要进行删除
		for (int i = ret; i < abs->m_Size; i++)
		{
			//数据前移
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;//更新通讯录中的人员数
		cout << "删除成功！" << endl;
	}
	else
	{
		cout << "查无此人！" << endl;
	}
	system("pause");
	system("cls");
}

//4、查找指定联系人
void findPerson(Addressbooks* abs)
{
	cout << "请输入您要查找的联系人：" << endl;
	string name;
	cin >> name;

	//判断指定的联系人是否存在通讯录中
	int ret = isExist(abs, name);
	if (ret!=-1)
	{
		cout << "姓名：" << abs->personArray[ret].m_Nmame << "\t";
		cout << "性别：" << (abs->personArray[ret].m_Sex == 1 ? "男" : "女") << "\t";
		cout << "年龄：" << abs->personArray[ret].m_age << "\t";
		cout << "电话：" << abs->personArray[ret].m_phone << "\t";
		cout << "地址：" << abs->personArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

//5、修改联系人信息
void modifyPerson(Addressbooks* abs)
{
	cout << "请输入您要修改的联系人" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (ret!=-1)
	{
		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[ret].m_Nmame = name;
		//性别
		cout << "请输入性别：" << endl;
		cout << "1---男" << endl;
		cout << "2---女" << endl;
		int sex = 0;
		cin >> sex;
		while (true)
		{
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入！" << endl;
		}
		//年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_age = age;
		//电话
		cout << "请输入联系电话：" << endl;
		string phone;//错误“string phone = 0”string 字符串型不能写=0
		cin >> phone;
		abs->personArray[ret].m_phone = phone;
		//地址
		cout << "请输入地址：" << endl;
		string addr;
		cin >> addr;
		abs->personArray[ret].m_Addr = addr;

		cout << "修改成功！" << endl;
	}
	else
	{
		cout << "查无此人！" << endl;
	}
	system("pause");
	system("cls");
}

//6、清空联系人
void cleanPerson(Addressbooks* abs)
{
	cout << "是否要清空联系人？" << endl;
	cout << "1---确认清空" << endl;
	cout << "2---取消清空" << endl;
	int key = 0;
	cin >> key;

	switch (key)//额外练习：对清空操作进行二次判断，使用switch选择
	{
	case 1:
		abs->m_Size = 0;//将当前记录联系人数量重置为0，做逻辑清空操作
		cout << "通讯录已清空" << endl;
		system("pause");
		system("cls");
		break;
	case 2:
		cout << "已取消" << endl;
		system("pause");
		system("cls");
		break;
	default:
		cout << "输入有误，请重新输入！" << endl;
		system("pause");
		system("cls");
	}
}

//菜单界面
void showMenu()
{
	cout << "*************************" << endl;
	cout << "***** 1、添加联系人 *****" << endl;
	cout << "***** 2、显示联系人 *****" << endl;
	cout << "***** 3、删除联系人 *****" << endl;
	cout << "***** 4、查找联系人 *****" << endl;
	cout << "***** 5、修改联系人 *****" << endl;
	cout << "***** 6、清空联系人 *****" << endl;
	cout << "***** 0、退出通讯录 *****" << endl;
	cout << "*************************" << endl;
}


int main()
{
	//创建一个通讯录的结构体变量
	Addressbooks abs;
	//初始化通讯录中当前人员个数
	abs.m_Size = 0;

	int select = 0;//创建一个用户选择输入的变量

	while (true)
	{
		showMenu();//菜单的调用

		cin >> select;

		switch (select)//搭建选择框架
		{
		case 1://1、添加联系人
			addPerson(&abs);//利用地址传递可以修饰实参
			break;
		case 2://2、显示联系人
			showPerson(&abs);
			break;
		case 3://3、删除联系人
		//{
		//	cout << "请输入要删除的联系人的姓名：" << endl;
		//	string name;
		//	cin >> name;
		//	if (isExist(&abs, name) == -1)
		//	{
		//		cout << "查无此人" << endl;
		//	}
		//	else
		//	{
		//		cout << "找到了" << endl;
		//	}
		//}
			deletePerson(&abs);//调用函数
			break;
		case 4://4、查找联系人
			findPerson(&abs);
			break;
		case 5://5、修改联系人
			modifyPerson(&abs);
			break;
		case 6://6、清空联系人
			cleanPerson(&abs);
			break;
		case 0://0、退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "输入有误，请重新输入！" << endl;
			system("pause");
			system("cls");
			break;
		}
	}

	system("pause");

	return 0;
}