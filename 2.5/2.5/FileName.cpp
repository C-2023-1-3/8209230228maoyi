#include <iostream>
#include<string>
#include<cctype>
using namespace std;

int main() {
	string s;
	int a = 0, b = 0, c = 0, d = 0;
	getline(cin, s);
	for (char ch : s)
	{
		if (isalpha(ch))
		{
			a++;
		}
		else if (isspace(ch)) {
			b++;
		}
		else if (isdigit(ch))
		{
			c++;
		}
		else {
			d++;
		}
	}
	cout << "Ӣ����ĸ�ĸ���" << a << endl;
	cout << "�ո�ĸ���" << b << endl;
	cout << "�����ַ��ĸ���" << c << endl;
	cout << "�����ַ��ĸ���" << d << endl;
	return 0;
}