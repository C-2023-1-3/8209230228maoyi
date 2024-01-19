#include <iostream>
using namespace std;
int main()
{
	char a;
	cin >> a;
	if (islower(a))
	{
		toupper(a);
		cout << a << endl;
	}
	else
	{
		cout << (int)a;
	}
}