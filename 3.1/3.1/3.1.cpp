#include<iostream>
using namespace std;
int main()
{
	int m, n;
	cout << "��������������: \n";
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
	cout << " ���Լ�� : " << a << endl;
	cout << " ��С������: " << b << endl;

	return 0;
}