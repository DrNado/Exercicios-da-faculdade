#include<iostream>
using namespace std;




void array(int* Array, int& tam)
{
	int aux;
	cin >> tam;
	int cont = 0;
	for (int i = 0; i < tam; i++)
	{
		cin >> Array[i];
	}


	for (i = 0; i < tam; i++)
	{
		if (Array[i] != 0)
		{
			if (Array[i] > Array[i - 1])
			{
				Array[i] = aux;
				cout << aux << endl;
				cont++;
			}
			else if (Array[0] > Array[i])
			{
				cont++;
			}
		}


	}
	cout << "o maior num" << aux << " e esse numero veio: " << cont << " veses " << end;

}


void main()
{

	int* a;
	int t = 5;


	a = new int[t];
	array(*a, &t)



		system("pause");
}