#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������
	cout << "x = "; cin >> x;
	A = x*x*sin(x/2);
	// ����� 1: ������������ � ��������� ����
	if ( x <= -5)
		B = atan(exp(x));
	if (-5 < x && x < 0)
		B = 1+x*x*x/4;
	if (x > 0)
		B = log(fabs(x)) -x/5;
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;

	// ����� 2: ������������ � ����� ����
	if (x <= -5)
		B = atan(exp(x));
	else
		if (-5 < x && x < 0)
			B = 1 + x * x * x / 4;
		else
			if (x > 0)
				B = log(fabs(x)) - x / 5;
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}