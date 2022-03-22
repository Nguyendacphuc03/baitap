// bai3
#include<iostream>
using namespace std;
int main()
{
	int luachon;
	cout << "1. di lam " << endl;
	cout << "2. di bo " << endl;
	cout << "3. di choi" << endl;
	cout << "4. di an " << endl;
	cout << "5. thi lai " << endl;
	cout << "moi nhap lua chon cua ban " << endl;
	cin >> luachon;
	switch(luachon)
	{
		case 1: 
			cout << "ban da lua chon di lam"; break;
		case 2:
			cout << "ban da lua chon di bo "; break;
		case 3:
			cout << "ban da lua chon di choi"; break;
		case 4: 
			cout << "ban da lua chon di an"; break;
		case 5:
			cout << "ban da lua chon di thi lai THPTQG o truong quang xuong II"; break;
	}
	return 0;
}
