//thuc hanh 1 
#include<iostream>
using namespace std; 
int main ()
{
	int thang, nam;
	cout << "nhap thang va nam " << endl;
	cout << "thang : " ;cin >> thang;
	cout << "nam : "; cin >> nam;
	switch(thang)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		cout << "thang " << thang << " co 31 ngay " << endl; break;
		case 4: case 6: case 9: case 11:
		cout << "thang " << thang << " co 30 ngay " << endl; break;
		case 2:
		if(nam%4==0)
		cout << "thang 2 co 29 ngay " << endl;
		else 
		cout << "thang 2 co 28 ngay " << endl;
		break;
	} 
	return 0;
} 
