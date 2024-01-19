#include<iostream>
using namespace std;
#define PI 3.1415926;
int main()
{
	float h, r, s, v;
	cin >> h >> r;
	s = r * r * PI;
	v = s * h / 3;
	cout << v << endl;
	return 0;
}