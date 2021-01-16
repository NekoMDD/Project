#include<iostream>
using namespace std;

int main32()
{

	for (int i = 1; i <10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i << "*" << j << "=" << i * j << " ";
		}
		cout << endl;
	}

	system("pause");

	return 0;
}