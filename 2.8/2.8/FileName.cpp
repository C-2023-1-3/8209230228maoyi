#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double a, xn, xn1;
	cout << "������һ������: \na = ";
	cin >> a;
	xn = a;
	xn1 = (xn + a / xn) / 2;
	if (a < 0)
		cout << "aû��ʵ����" << endl;
	else
	{
		do
		{
			xn = xn1;
			xn1 = (xn + a / xn) / 2;
		} while (fabs(xn - xn1) >= 0.0000000001);
		cout << "xn  = " << xn << endl;
	}

	return 0;
}