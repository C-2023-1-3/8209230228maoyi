#include<iostream>
#include "5.4.h"
using namespace std;
void max(Student* stu)
{
	int m = stu[0].score;
	int n = stu[0].number;
	for (int i = 0; i < 5; i++)
	{
		if (m < stu[i].score)
		{
			m = stu[i].score;
			n = stu[i].number;
		}
	}
	cout << "成绩最高者的学号为： " << n;
}
void Student::show_value()
	{
		cout << "number =" << number << endl;
		cout << "score =" << score << endl;
	}
int main()
{
	Student stu[5] = { Student(1001,96),Student(1002,82),Student(1003,69),Student(1004,98),Student(1005,100) };
	Student* p = stu;
	max(p);
	return 0;
}