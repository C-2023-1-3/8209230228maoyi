#include<iostream>
using namespace std;
const int size = 10;
void bubbleSort(double list[10])
{
	double temp;
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < ::size - 1; j++)
		{
			if (list[j] > list[j + 1])
			{
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
				changed = true;
			}
		}
	} while (changed == true);
}

int main()
{
	double list[::size];
	cout << "请输入十个数字 : \n";
	for
		(int i = 0; i < ::size; i++)
		cin >> list[i];
	bubbleSort(list);

	for (int k = 0; k < ::size; k++)
		cout << list[k] << " ";
	cout << endl;

	return 0;
}