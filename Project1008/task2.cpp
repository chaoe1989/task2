#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include "task.h"
using namespace std;

/*----------------函数定义-------------*/
void SolveRoots(double a, double b, double c)
{

	double r1, r2;
	int flag = 1;
	
	if (a <= 0)
		cout << "It is not a quadratic equation with one unknown!!" << endl;
	double temp, root;
	temp = b * b - 4 * a*c;
	root = sqrt(temp);
	if (temp < 0)
		flag = 0;
	else if (b > 0)
	{

		r1 = 2 * c / (-b - root);
		r2 = (-b - root) / 2 / a;

	}
	else if (b < 0)
	{

		r1 = (-b + root) / 2 / a;
		r2 = 2 * c / (-b + root);

	}
	else
	{

		temp = c / a;
		r1 = sqrt(-temp);
		r2 = -sqrt(-temp);

	}
	if (flag)
	{

		cout << "the roots are:" << endl;
		cout << r1 << "," << r2 << endl;

	}
	else
		cout << "it does not have any root!" << endl;

}

void Swap(double a, double b)

{
	
	double c;
	c = a;
	a = b;
	b = c;
	cout << "a="<<a<<" b=" << b << endl;

}

void Swap(int a, int b)

{

	int c;
	c = a;
	a = b;
	b = c;
	cout << "a=" << a << " b=" << b << endl;

}

void Swap(float a, float b)

{

	float c;
	c = a;
	a = b;
	b = c;
	cout << "a=" << a << " b=" << b << endl;

}



void Triarea(float a, float b, float c)
{
	
	if (a + b <= c || a + c <= b || b + c <= a)
		cout << "it is not a triangle!" << endl;
	else
	{

		const float *p = &a;
		const float *q = &b;
		const float *r = &c;
		double s, area;
		s = (a + b + c) / 2;
		area = sqrt(s*(s - a)*(s - b)*(s - c));
		cout << "the area of the triangle is ";
		cout << area << endl;

	}
	
}

void CalYear(int year, int month, int day)
{
	
	int d=0, m,w;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		m = 29;
	else
		m = 28;
	switch (month)
	{

	case 1: d += 0; break;
	case 2: d += 31; break;
	case 3: d += m + 31; break;
	case 4: d += m + 62; break;
	case 5: d += m + 92; break;
	case 6: d += m + 123; break;
	case 7: d += m + 153; break;
	case 8: d += m + 184; break;
	case 9: d += m + 215; break;
	case 10: d += m + 245; break;
	case 11: d += m + 276; break;
	case 12: d += m + 306; break;
	default:
		cout << "ERROR!!" << endl;
		break;

	}
	d = d + day;
	w = d / 7+1;
	cout << "this day is " << d << "th day" << endl;
	cout << "and the " << w << "th week of the year" << endl;

}



