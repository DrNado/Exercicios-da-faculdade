#include<iostream>
using namespace std;

void main()
{
	int a = 1;
	float b = 1.5;
	char c = 'c';



	cout << "var a antes da mod:" << a << endl;
	cout << "var b antes da mod:" << b << endl;
	cout << "var c antes da mod:" << c << endl;

	int* Pa;
	float* Pb;
	char* Pc;

	Pa = &a;
	Pb = &b;
	Pc = &c;

	*Pa = 2;
	*Pb = 0.5;
	*Pc = 'a';

	cout << "var a depois da mod:" << a << endl;
	cout << "var b depois da mod:" << b << endl;
	cout << "var c depois da mod:" << c << endl;






	system("pause");
}