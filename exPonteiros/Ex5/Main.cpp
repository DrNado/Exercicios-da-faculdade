#include<iostream>
//#include<ctime>
using namespace std;


//void array ()
//{
//	
//
//}


void main()
{
	//int *p;
	//int cont[5] = {1,2,3,4,5};
	//int aux = 0;
	int a = 1;
	float b = 1.5;
	char c = 'c';
	


	cout <<"var a antes da mod:"<< a <<;
	cout << "var b antes da mod:" << b << ;
	cout << "var c antes da mod:" << c << ;
	int* Pa;
	float* Pb;
	char* Pc;

	Pa = &a;
	Pb = &b;
	Pc = &c;

	*Pa = 2;
	*Pb = 0.5;
	*Pc = 'a';

	cout << "var a depois da mod:" << a << ;
	cout << "var b depois da mod:" << b << ;
	cout << "var c depois da mod:" << c << ;



	//int *x;


	//int qtd;
	//int c[5];

	//x = c;
	//cout << "insira a qttd " << endl;
	//cin >> qtd;

	//Exfunc(x, qtd);

	////p = &cont[0];  


	//p = &cont[0];
	// p++;   acessa o segundo elemento do vectorium
	// pv  = pv + 3; com a instrução anterior agora acessa o quinto elemento


	//cout << *p << endl;

	
	//*aux = *p + 5;
	//*p = cont[0] + 1;
	//cin >> fdc;
    //system("cls");

	

	system("pause");
}