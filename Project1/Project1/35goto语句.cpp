#include<iostream>
using namespace std;

int main35()
{

	//goto语句

	cout << "1、xxx" << endl;
	cout << "2、xxx" << endl;
	goto FLAG;
	cout << "3、xxx" << endl;
	cout << "4、xxx" << endl;
	cout << "5、xxx" << endl;
	FLAG:
	cout << "6、xxx" << endl;
	//在程序中尽量少使用goto，以免造成流程混乱

	system("pause");

	return 0;
}