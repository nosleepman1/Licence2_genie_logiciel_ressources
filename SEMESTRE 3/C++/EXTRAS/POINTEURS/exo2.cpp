/*Ecrire un programme qui permet de saisir N de type entier.
 -Une fonction qui permet de saisir N 
 -Une fonction qui permet de vérifier si N est premier 
NB : N est utilisé comme pointeur*/

#include <iostream>
#include <cstdlib>

void saisie(int *n){
	
	std::cout << "Saisir n:  ";
	std::cin >> *n;
}

bool estPremier(int* n){
	if(*n < 2) return false;

	for (int i = 2; i < *n; i++)
	{
		if (*n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int *n = new int;
	saisie(n);
	std::cout << " \n" << *n << std::endl;
	std::cout << "------------------ \n" << std::endl;
	std::cout << estPremier(n);
	
	return 0;
}