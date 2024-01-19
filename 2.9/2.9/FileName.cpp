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
	cout << "用了 " << (a - 1) << " 天\n" << "一共花费了:  " << sum << " 元" << endl;
	cout << "平均每天花费了: " << c << " 元." << endl;
	return 0;
}