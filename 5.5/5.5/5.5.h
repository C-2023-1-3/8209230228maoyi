#pragma once
#include <iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point(int newx, int newy);
	void set_point(int i, int j);
	void display();
};