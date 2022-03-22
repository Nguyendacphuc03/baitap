//bai3 
#include<iostream>
using namespace std;
int main()
{
	float x, y;
	char toantu;
	cout << "nhap vao 2 so x va y " << endl;
	cout << "x = " ; cin >> x;
	cout << "\ny = " ; cin >> y;
	cout << "\nnhap toan tu " ; cin >> toantu;
	switch(toantu)
	{
		case '+':
			cout << "tong hai so = " << x+y ; break;
		case '-':
			cout << "hieu hai so = " << x-y ; break;
		case '*':
			cout << "tich hai so = " << x*y ; break;
		case '/':
			cout << "thuong hai so = " << x/y ; break;
		default :
			cout << "loi phep tinh "; break;
	}
	return 0;
}
