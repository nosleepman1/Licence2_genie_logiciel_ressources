/*
Écris une fonction void permuter (int *a, int *b) qui échange les valeurs de deux entiers passés
en paramètres via leurs adresses.
*/

#include <iostream>
#include <string>


void permuter(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	using namespace std;

	int a = 10, b = 15;

	cout << "Avant " << endl;
	cout << " a = " << a << endl;
	cout << " b = " << b << endl;

	permuter(&a,&b);

	cout << "\n\nApres " << endl;
	cout << " a = " << a << endl;
	cout << " b = " << b << endl;


	return 0;
}
	
