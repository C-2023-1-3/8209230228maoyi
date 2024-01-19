#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "输入两个正整数: \n";
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	int m = 1, n = 1, k = 2;
	while (k <= a && k <= b)
	{
		if (a % k == 0 && b % k == 0)
			m = k;
		k++;
	}

	n = (a * b) / m;
	cout << " 最大公约数 : " << m << endl;
	cout << " 最小公倍数: " << n << endl;

	return 0;
}