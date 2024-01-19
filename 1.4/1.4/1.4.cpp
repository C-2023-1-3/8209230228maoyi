#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//oxfffe
	cout << oct << "output in unsigned int 1 type:"" << testUnint<< end;//<<oct";
	cout << oct << "output in char type:!" << static_cast<int>(testUnint) << endl;
	cout << oct << "output in short type:" << static_cast<int>(testUnint) << endl;
	cout << oct << "output in int type:" << static_cast<int> (testUnint) << endl;
	cout << oct << "output in double type:" << static_cast<int>(testUnint) << endl;
	cout << oct << "output in double type:" << setprecision(4) << static_cast<int>(testUnint) << endl;
	cout << oct << "output in Hex unsigned int type:" << testUnint << endl;
	system("pause");
	return 0;
}
