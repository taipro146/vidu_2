#include"phan_so.h"
#include<iostream>


phanso A; 
using namespace std;

void main() {
	do {
		cout << "\nnhap vao mau so  : x/y " << endl; cin >> A.tu; cin >> A.mau;
	} while (A.tu == 0 || A.mau == 0) ;
	phanso * C = new phanso;
	phanso G = A.rutgon(A);
	cout << "\nphan so vua nhap  là :" << G.tu << "/" << G.mau;
	C->tu = 1; C->mau = 2;
	phanso D = C->Nhan(G);
	phanso E = C->Chia(G);
	phanso X = C->operator+(A);
	phanso Y = C->operator-(A);
	phanso Xr = X.rutgon(X);
	phanso Yr = Y.rutgon(Y);
	phanso Dr = D.rutgon(D);
	phanso Er = E.rutgon(E);

	cout << "\nket qua nhan hai phan so là :" << Dr.tu <<"/"<< Dr.mau;
	cout << "\nket qua CHIA hai phan so là :" << Er.tu << "/" << Er.mau;
	cout << "\nKet qua cong hai phan so là :" << Xr.tu << "/" << Xr.mau;
	cout << "\nKet qua tru hai phan so là :" << Yr.tu << "/" << Yr.mau;

	delete C;

}




