/*

Déclare une variable entière, un pointeur vers cette variable, et un pointeur vers ce pointeur.
Affiche la valeur de la variable à chaque niveau d’indirection (*p, **pp).*/

#include <iostream>


int main(){

	int n = 18;

	int *ptr1 = &n;
	int **ptr2 = &ptr1;

	std::cout << " val normale = " << n << std::endl;
	std::cout << " val *pointeur 1 = " << *ptr1 << std::endl;
	std::cout << " val **pointeur 2 = " << **ptr2 << std::endl;



	
	return 0;
}