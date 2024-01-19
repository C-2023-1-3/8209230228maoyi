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
	cout << "英文字母的个数" << a << endl;
	cout << "空格的个数" << b << endl;
	cout << "数字字符的个数" << c << endl;
	cout << "其他字符的个数" << d << endl;
	return 0;
}