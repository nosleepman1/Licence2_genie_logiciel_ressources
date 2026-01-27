/*Ecrire un programme qui contient les fonctions suivantes : 
- Une fonction qui saisit un tableau de N entiers 
- Une fonction qui affiche le tableau de N entiers 
- Une fonction qui transfert dans un tableau T1 toutes les valeurs paires 
NB : Les tableaux sont utilisés comme des pointeurs */

#include <iostream>
#include <cstdlib>

using namespace std;

int* saisie(int &n){

	cout << "Nombre d entiers:  ";
	cin >> n;
	cin.ignore();

	int* tab = (int*) malloc(n * sizeof(int));

	for (int i = 0; i < n; i++)
	{
		cout << "valeur" << i+1 <<" :  ";
		cin >> tab[i];
		cin.ignore();
		system("cls");
	}
	return tab;
}

int* transfert(int* tableau, int n){
	int* newtab = (int*)malloc(n*sizeof(int));
	int Z = 0;
	for (int i = 0; i < n; i++)
	{
		if (tableau[i] % 2 == 0)
		{
			newtab[Z] = tableau[i];
			cout << "transfert de " << newtab[Z] << endl;
			Z++;
		}
	}
	return newtab;
}

void display(int *tableau, int n){
	for (int i = 0; i < n; i++)
	{
		cout <<  tableau[i] << " |  ";
	}
	cout << endl;
}


int main()
{
	int n;
	int* array = saisie(n);
	display(array, n);

	cout << "\n\n-------------------\n\n" << endl;
	int* newtab = transfert(array, n);
	
	return 0;
}