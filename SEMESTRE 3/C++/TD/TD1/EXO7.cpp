/*
Utilise new pour allouer dynamiquement un entier. Affecte-lui une valeur, affiche-la, puis
libère la mémoire avec delete.
*/

#include <iostream>

int main()
{
	int *ptr = new int;

	*ptr = 5;
	std::cout << *ptr;
	delete ptr;
	return 0;
}