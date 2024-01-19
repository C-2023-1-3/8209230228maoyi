#pragma once
#include<iostream>
using namespace std;
class Student
{
public:
	Student(int n, int s) :number(n), score(s) {}
	void show_value();
	int score;
	int number;
};