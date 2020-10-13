#define  _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "task.h"
using namespace std;

int main()
{

	int flag;
	cout << "please choose what you want to do:" << endl;
	cout << "choose 1:Solve the roots of quadratic equation with one unknown;" << endl;
	cout << "choose 2:Exchange two data of the same class;" << endl;
	cout << "choose 3:Input the side length of the triangle to calculate the area;" << endl;
	cout << "choose 4:Enter the data to calculate the day of the year;"<<endl;
	cin >> flag;

	switch (flag)
	{

	case 1: double a, b, c;
		cout << "please input a,b,c in order:" << endl;
		cin >> a >> b >> c; 
		SolveRoots(a, b, c);  break;
	case 2:
		cout << "input the two numbers you want to swap" << endl;
		cin >> a >> b; 
		Swap(a, b);  break;
	case 3:
		cout << "input the three sides of a triangle" << endl;
		cin >> a >> b >> c; 
		Triarea(a, b, c);  break;
	case 4:
		int year, month, day; 
		cout << "input the year,month and the day" << endl;
		cin >> year >> month >> day; CalYear(year, month, day);  break;
	default:cout << "ERROR!Please choose again!" << endl;

	}

	system("pause");
	return 0;

}