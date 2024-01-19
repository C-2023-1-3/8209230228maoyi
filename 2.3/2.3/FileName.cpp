#include <iostream>
using namespace std;
int main()
{
	float a, b, c, s;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		s = a + b + c;
		cout << "三角形的周长为" << s << endl;
		if (a == b, b == c)
		{
			cout << "该三角形为等腰三角形" << endl;
		}
	}
	else
	{
		cout << "该三角形不存在" << endl;
	}
}