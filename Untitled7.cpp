#include<iostream> 
#include<cmath> 
using namespace std;
int main() 
{
	int luachon ;
	cout<<"*==============================================*"<<endl;
	cout<<"|                    MENU                      |"<<endl;
	cout<<"*==============================================*"<<endl;
	cout<<"| 1. Tinh dien tich tam giac                   |"<<endl; 
	cout<<"| 2. Tinh dien tich HCN                        |"<<endl; 
	cout<<"| 3. Tinh dien tich hinh vuong                 |"<<endl; 
	cout<<"| 4. Tinh dien tich hinh thang                 |"<<endl; 
	cout<<"| 5. Tinh dien tich hinh tron                  |"<<endl; 
	cout<<"| 6. Tinh dien tich HBH                        |"<<endl; 
	cout<<"*==============================================*"<<endl;
	cout<<"nhap vao lua chon cua ban : " <<endl;
	cin>>luachon;
	
	switch(luachon) 
	{
		case 1:
			float a,b,c,p;
			cout<<"nhap 3 cua tam giac " ;
			cout<<"a = ";cin>>a;
			cout<<"b = ";cin>>b;
			cout<<"c = ";cin>>c;
			p=(a+b+c)/2;
			cout<<"dien tich tam giac la : "<<sqrt(p*(p-a)*(p-b)*(p-c))<<endl;
			break;
		case 2:
			float x,y;
			cout<<"nhap chieu dai va chieu rong HCN " ;
			cout<<"chieu dai x= " ; cin>>x;
			cout<<"chieu rong y= " ; cin>>y;
			cout<<"dien tich HCN la : "<<x*y<<endl;
		    break;
		case 3 :
			float d;
			cout<<"nhap canh hinh vuong " ; cin>>d;
			cout<<"dien tich hinh vuong la :"  <<d*d<<endl;
		    break;
		case 4 :
			float e,f,g ;
			cout<<"nhap canh day lon " ; cin>>e;
			cout<<"nhap canh day be "; cin >>f;
			cout<<"nhap chieu cao " ; cin>>g;
			cout<<"dien tich hinh thang la : " <<(e+f)*g/2 <<endl; 
			break;
		case 5:
			float r;
			cout<<"nhap vao ban kinh hinh tron " ; cin>>r;
			cout<<"dien tich hinh tron la : " <<3.14*r*r<<endl;
			break;
		case 6 :
			float i,j;
			cout<<"nhap vao day HBH " ; cin>>i;
			cout<<"nhap vao chieu cao HBH " ; cin>>j;
			cout<<"dien tich HBH la : " <<i*j<<endl;
			break;	
		
	}
	return 0; 
}
