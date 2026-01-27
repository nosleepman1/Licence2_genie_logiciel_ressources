/*r
Ecrire un programme qui contient les fonctions suivantes :
 -Une fonction qui permet de saisir N étudiants.
 -Une fonction qui permet d’afficher les étudiants qui ont une moyenne supérieure à 15. 
Etudiant est caractérisé par (nom, prénom, âge, moyenne). 
NB : Les tableaux sont utilisés comme des pointeurs */

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstddef>

using namespace std;

typedef struct etudiant
{
	string prenom;
	string nom;
	int age;
	float moyenne;
}etudiant;

etudiant* saisirEtudiants(int &n){
	cout << "Le nombre d etudiants:  ";
	cin >> n;
	cin.ignore();

	etudiant* e = new etudiant[n];

	if (!e)
	{
		cout << "Err allocation";
		exit(1);
	}

	for (int i = 0; i < n; i++)
	{
		cout << "Etudiant "<< i+1 << " :  \n";
		cout << "Prenom: ";
		getline(cin, e[i].prenom);

		cout << "Nom: ";
		getline(cin, e[i].nom);
		
		cout << "age: ";
		cin >> e[i].age;
		
		cout << "Moyenne: ";
		cin >> e[i].moyenne;
		
		cin.ignore();
	}
	return e;
}

void displayEtudiants(etudiant* e, int n){
	for (int i = 0; i < n; i++)
	{
		if (e[i].moyenne > 15)
		{
			cout << "Prenom: " << e[i].prenom << endl;
			cout << "Nom: " << e[i].nom << endl;
			cout << "Age: " << e[i].age << endl;
			cout << "Moyenne: " << e[i].moyenne << endl;
		}
	}
}


int main()
{

	int n;

	etudiant* tab = saisirEtudiants(n);

	cout <<"\n\n---------------------------\n\n" << endl;

	displayEtudiants(tab, n);
	
	
	return 0;
}