//bai6
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a, b, c, luachon;
	float x1, x2, x, dt;
	cout << "moi nhap 3 so nguyen duong "<< endl;
	cout << "a = " ;cin>>a;
	cout << "b = " ;cin>>b;
	cout << "c = " ;cin>>c;
	dt=b*b-4*a*c;
	x=-b/2*a;
	x1=(-b+sqrt(dt))/4*a;
	x2=(-b-sqrt(dt))/4*a;
	cout<<"*===================================*"<<endl;
	cout<<"|               MENU                |"<<endl;
	cout<<"|-----------------------------------|"<<endl;
	cout<<"| 1. Giai bpt ax + b > c            |"<<endl;
	cout<<"| 2. Giai pt ax2 + bx +c = 0        |"<<endl;
	cout<<"| 3. Kiem tra tam giac              |"<<endl;
	cout<<"*===================================*"<<endl;
	cout<<"Nhap su lua chon cua ban: "<<endl;
	cin>>luachon;
	switch(luachon)
	{
		case 1:
			if(a==0)
				if(b>c)
				cout << "phuong trinh co VSN"<<endl;
				else
				cout << "phuong trinh vo nghiem" <<endl;
			else
			cout << "phuong trinh co nghiem x>" << (c-b)/a << endl;
			break;
		case 2:
			if(a==0)
				if(b==0)
					if(c==0)
					cout<<"phuong trinh co VSN" << endl;
					else
					cout<<"phuong trinh vo nghiem" << endl;
				else
				cout<<"phuong trinh co nghiem x = "<<-c/b<<endl;
			else
			{
				if(dt<0)
					cout << "phuong trinh vo nghiem" <<endl;
				else if(dt==0)
				{
					cout << "phuong trinh co nghiem duy nhat" <<endl;
					cout << "x = " << x << endl;
				}
				else
					cout << "phuong trinh co 2 nghiem pb" <<endl;
					cout << "x1=" << x1 <<endl;
					cout << "x2=" << x2 <<endl;
			}
			break;
		case 3:
			cout<<"kiem tra tam giac  "<<endl ;
			if(a+b>c || a+c>b || b+c>a)
			{
				cout<<" day la 3 canh cua tam giac " <<endl ;
				if(a==b && a==c && b==c )
					cout<<" day la tam giac deu "<<endl ;
				else if(a==b || a==c || b==c )
				cout<<" day la tam giac can "<<endl ;
				else if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
				cout<<"day la tam giac vuong "<<endl ;
				else
				cout<<"day la tam giac thuong "<< endl ;
			}
			else
			cout<<"day khong phai 3 canh cua "<<endl;
			break;
	}
	return 0;
			
}
