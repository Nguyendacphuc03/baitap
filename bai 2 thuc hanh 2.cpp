//thuc hanh 2
#include<iostream>
using namespace std;
int main()
{
	char kytu;
	cout << " nhap vao 1 ky tu : " << endl;
	cin >> kytu;
	switch(kytu)
	{
		case 'a': case 'A':
			cout << " Xin chao !" ; break;
		case 'b': case 'B':
			cout << " Hoan nghenh!" ; break;
		default:
			cout << " Xin loi!" ; break;
	}
	return 0;
}
