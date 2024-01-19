#include<iostream>//3
using namespace std;
class cft
{
public:
	void set_value();
	float js_value();
	void display();
private:
	float length;
	float weight;
	float high;
};
void cft::set_value()
{
	cout << "请分别输入长方形的长、宽、高:" << endl;
	cin >> length;
	cin >> weight;
	cin >> high;
}
float cft::js_value()
{
	float v;
	v = length * weight * high;
	return v;
}
void cft::display() { cout << "长方形的体积为:" << js_value() << endl; }
int main()
{
	cft v1, v2, v3;
	v1.set_value();
	cout << "长方形1的体积" << endl;
	v1.display();
	v2.set_value();
	cout << "长方形2的体积" << endl;
	v2.display();
	v3.set_value();
	cout << "长方形3的体积" << endl;
	v3.display();
}
