#include <iostream>
using namespace std;
int main()
{
	float a, b, c, s;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		s = a + b + c;
		cout << "�����ε��ܳ�Ϊ" << s << endl;
		if (a == b, b == c)
		{
			cout << "��������Ϊ����������" << endl;
		}
	}
	else
	{
		cout << "�������β�����" << endl;
	}
}