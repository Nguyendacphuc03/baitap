//bai5 
#include<iostream>
using namespace std;
int main()
{
	float a, b, c, max, min;
	int luachon;
	cout << "nhap vao a, b, c" << endl;
	cout << "a = "; cin>>a;
	cout << "\nb = "; cin>>b;
	cout << "\nc = "; cin>>c;
	cout<<"*=========================================*"<<endl;
	cout<<"|                     MENU                |"<<endl;
	cout<<"*-----------------------------------------*"<<endl;
	cout<<"| 1. Tinh tong a+b+c                      |"<<endl;
	cout<<"| 2. Tinh tich a*b*c                      |"<<endl;
	cout<<"| 3. Tim max                              |"<<endl;
	cout<<"| 4. Tim min                              |"<<endl;
	cout<<"*=========================================*"<<endl;
	cout << "Nhap su lua chon cua ban: "<<endl;
	cin >> luachon;
	switch(luachon)
	{
	case 1:
		cout<<"tong a+b+c= " <<a+b+c; break;
	case 2:
		cout<<"tich a*b*c= " <<a*b*c; break;
	case 3:
		max = a;
		if (max < b) max = b;
		if (max < c) max = c; 
			cout <<"So lon nhat la: "<<max<<endl; break;
	case 4:
		min = a;
		if (min > b) min = b;
		if (min > c) min = c; 
			cout <<"So nho nhat la: "<<min<<endl; break;
	default :
		cout << "xin loi"; break;
    }
return 0;
}
