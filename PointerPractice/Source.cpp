#include <iostream>
using namespace std;	

int myFunc(int& x, int& y)
{
	x = 5;
	y = 7;
	int result;
	result = x + y;
	return result;
}

int main()
{
	int a = 10;
	int b = 20;

	int z = myFunc( a, b);

	cout << a <<"+"<< b <<" = "<< z << endl;
	system("Pause");
}