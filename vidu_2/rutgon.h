#include"phan_so.h"



phanso rutgon(phanso n) {
	phanso ketquarutgon;
	for (int i = 0; i <= n.mau; i++) {
		if (n.tu%i == 0) {

			if (n.mau%i == 0) {

				ketquarutgon.tu = n.tu / i;
				ketquarutgon.mau = n.mau / i;

			}
		}
	}
	return ketquarutgon;
}
