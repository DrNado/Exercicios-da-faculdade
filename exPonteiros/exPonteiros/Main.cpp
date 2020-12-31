#include<iostream>
#include<ctime>
using namespace std;


void swap (int &A, int &B)
{
	int aux = A;

	A = B;

	B = aux;
}


void main()
{
	//int *p;
	//int cont[5] = {1,2,3,4,5};
	//int aux = 0;
	int maria = 3;
	int zeh = 4;

	swap(maria, zeh);

	cout << "o valor maria ficou:" << maria << endl;
	cout << "o valor zeh ficou:" << zeh << endl;



	///*cout << "o valor da inteira ficou:" << maria << endl;
	//cout << "o valor da outra int ficou:" << zeh << endl;*/


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