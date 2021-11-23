#include <iostream>
#include <cmath>
using namespace std;

void print(float a, float b, float c)
{
	cout << "You wrote: ";
	if (a == 0 && b == 0)
	{
		cout << c << " = 0" << endl;
	}
	else if(a == 0 && b != 0)
	{
		if (c > 0) cout << b << "x + " << c << " = 0" << endl;
		if (c < 0) cout << b << "x - " << -c << " = 0" << endl;
		if (c == 0) cout << b << "x = 0" << endl;
	}
	else if (a != 0  && b == 0)
	{
		if (c > 0) cout << a << "x^2 + " << c << " = 0" << endl;
		if (c < 0) cout << a << "x^2 - " << -c << " = 0" << endl;
		if (c == 0) cout << a << "x^2 = 0" << endl;
	}
	else if (a != 0 && b != 0)
	{
		if (c > 0 && b > 0) cout << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
		if (c < 0 && b > 0) cout << a << "x^2 + " << b << "x - " << -c << " = 0" << endl;
		if (c < 0 && b < 0) cout << a << "x^2 - " << -b << "x - " << -c << " = 0" << endl;
		if (c > 0 && b < 0) cout << a << "x^2 - " << -b << "x + " << c << " = 0" << endl;
		if (c == 0 && b < 0) cout << a << "x^2 - " << -b << " = 0" << endl;
		if (c == 0 && b > 0) cout << a << "x^2 + " << b << " = 0" << endl;
	}
}

float line(float b, float c)
{
	if(c != 0) return -c / b;
	else return 0;
}
int line(int b, int c)
{
	if (c != 0) return -c / b;
	else return 0;
}

float nepoln(float a, float c)
{
	return sqrt(c);
}
int nepoln(int a, int c)
{
	return sqrt(c);
}

float kvadr1(float a, float b, float c)
{
	float dis = b * b - 4 * a * c;
	if (dis >= 0)
	{
		return ((-b + sqrt(dis))) / (2 * a);
	}
	else
	{
		return -4378573475345;
	}
}
float kvadr1(int a, int b, int c)
{
	float dis = b * b - 4 * a * c;
	if (dis >= 0)
	{
		return ((-b + sqrt(dis))) / (2 * a);
	}
	else
	{
		return -4378573475345;
	}
}

float kvadr2(float a, float b, float c)
{
	float dis = b * b - 4 * a * c;
	if (dis >= 0)
	{
		return ((-b - sqrt(dis))) / (2 * a);
	}
}
float kvadr2(int a, int b, int c)
{
	float dis = b * b - 4 * a * c;
	if (dis >= 0)
	{
		return ((-b - sqrt(dis))) / (2 * a);
	}
}


void urav()
{
	float a, b, c;
	cout << "Koeficenti.";
	cin >> a >> b >> c;
	print(a, b, c);
	if (a == 0 && b != 0)
	{
		cout << "x1 = " << line(b, c) << endl;
	}
	else if (a == 0 && b == 0)
	{
		if (c == 0)
		{
			cout << "x - any number" << endl;
		}
		else
		{
			cout << "No x" << endl;
		}
	}
	else if (a != 0 && b == 0)
	{
		if (c < 0)
		{
			cout << "x1 = " << nepoln(a, c) << " x2 = " << -1 * nepoln(a, c) << endl;
		}
		else if (c > 0)
		{
			cout << "No x" << endl;
		}
		else
		{
			cout << "x = 0" << endl;
		}
	}
	else
	{
		if (kvadr1(a, b, c) == -4378573475345)
		{
			cout << "No x" << endl;
		}
		else
		{
			cout << "x1 = " << kvadr1(a, b, c) << " x2 = " << kvadr2(a, b, c) << endl;
		}
	}
}

void zag()
{
	char opt;
	cout << "Hi, what do you want to do today?" << '\n' << "1 : Solve the equation." << '\n' << "2 : Know the factorial." << '\n';
	cin >> opt;
	switch (opt)
	{
	case '1':
		urav();
		break;
	case '2':
		break;
	default:
		cout << "Wrong case(" << endl;
		break;
	}
}
