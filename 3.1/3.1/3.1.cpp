#include<iostream>
using namespace std;
int main()
{
	int m, n;
	cout << "输入两个正整数: \n";
	cout << "m = ";
	cin >> m;
	cout << "n = ";
	cin >> n;
	int a = 1, b = 1, k = 2;
	while (k <= m && k <= n)
	{
		if (m % k == 0 && n % k == 0)
			a = k;
		k++;
	}

	b = (m * n) / a;
	cout << " 最大公约数 : " << a << endl;
	cout << " 最小公倍数: " << b << endl;

	return 0;
}