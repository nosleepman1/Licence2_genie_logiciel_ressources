/*
Demande à l’utilisateur la taille d’un tableau d’entiers, alloue-le dynamiquement, remplis-le
avec des valeurs, puis affiche la moyenne des éléments.
*/

#include <iostream>
#include <ctime>
using namespace std;


int saisie(){
	int N;
	cout << "Siasir la valeur :  ";
	cin >> N;
	cout << "\n" << endl;
	return N;
}

void remplirtab(int *tab, int n) {
	srand(time(0));

	for (int i = 0; i < n; i++)
	{
		tab[i] = rand() / 10;
	}
}

void afficherTab(int *tab, int n) {

	for (int i = 0; i < n; i++)
	{
		std::cout << " ["<< tab[i] << "] ";
	}
}


int main()
{
	
	int n = saisie();

	int* tab = new int[n];

	remplirtab(tab, n);

	afficherTab(tab, n);


	return 0;
}