#include"phan_so.h"

phanso phanso::Nhan(phanso a) 
{
	phanso result;
	result.tu = a.tu * tu;
	result.mau = a.mau* mau;
	return result;
}
phanso phanso::Chia(phanso b) {
	phanso ketqua;
	ketqua.tu = b.tu* mau;
	ketqua.mau = b.mau*tu;
	return ketqua;
}
phanso phanso::operator+(phanso x)
{
	phanso ketqua;
	ketqua.tu = (x.tu*mau) + (tu*x.mau);
	ketqua.mau = (x.mau*mau);
	return ketqua;
	phanso operator+(phanso x);
}
phanso phanso::operator-(phanso x)
{
	phanso ketqua;
	ketqua.tu = (x.tu*mau) - (tu*x.mau);
	ketqua.mau = (x.mau*mau);
	return ketqua;
	
}


phanso phanso::rutgon(phanso c) {
	phanso ketqua1;
	if (c.tu > 0 && c.mau > 0) {
		if (c.mau == 1) {

			ketqua1.tu = c.tu;
			ketqua1.mau = 1;

		}
		else if (c.tu%c.mau == 0 && c.mau!=1) {
			ketqua1.tu = 1;
			ketqua1.mau = 1;
		}
		else if (c.tu > c.mau)
		{
			for (int i = 1; i <= c.mau; i++) {
				if (c.tu % i == 0 && c.mau%i == 0) {
					ketqua1.tu = c.tu / i;
					ketqua1.mau = c.mau / i;
				}
			}
		}
		else if (c.tu < c.mau)
		{
			for (int i = 1; i <= c.tu; i++) {
				if (c.tu % i == 0 && c.mau%i == 0) {
					ketqua1.tu = c.tu / i;
					ketqua1.mau = c.mau / i;
				}
			}
		}
	}
	else if (c.tu == 0 || c.mau==0) {
		ketqua1.tu = 0;
		ketqua1.mau = 0;
	}
	else if (c.tu < 0 || c.mau<0)
	{
		if (c.mau <0 )
		{
			for (int i = -1; i >= c.mau; i--) {
				if (abs(c.tu % i) == 0 && abs(c.mau%i) == 0) {
					ketqua1.tu = -abs(c.tu / i);
					ketqua1.mau = abs(c.mau / i);
				}
			}
		}
		else if ( c.tu<0)
		{
			for (int i = -1; i >= c.tu; i--) {
				if (abs(c.tu % i) == 0 && abs(c.mau%i) == 0) {
					ketqua1.tu = -abs(c.tu / i);
					ketqua1.mau = abs(c.mau / i);
				}
			}
		}
	}
	else {
		ketqua1.tu = c.tu;
		ketqua1.mau = c.mau;
	}

	return ketqua1;
}