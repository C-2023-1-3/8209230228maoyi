#include<iostream>
#include <numeric>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int i;
	double b = 0.8, sum, c, a;
	sum = 0;
	a = 1;
	for (i = 2; i <= 100; i = i * 2)
	{
		sum = sum + b * i;
		c = sum / (a);
		a++;
	}
	cout << "���� " << (a - 1) << " ��\n" << "һ��������:  " << sum << " Ԫ" << endl;
	cout << "ƽ��ÿ�컨����: " << c << " Ԫ." << endl;
	return 0;
}