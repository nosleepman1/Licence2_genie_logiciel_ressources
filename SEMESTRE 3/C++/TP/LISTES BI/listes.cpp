#include <iostream>
#include <string>
#include "listes.hpp"
using namespace std; 





int main()
{
	list *liste = initList();

	etudiant e1 {"Abdallah", "DIOUF", 54};
	etudiant e2 {"Bouba", "MBAYE", 47};
	etudiant e3 {"Mohamed", "TINE", 78};


	instertAtFront(&liste, e1);
	instertAtFront(&liste, e2);
	instertAtFront(&liste, e3);

	showList(liste);

	instertAtBack(&liste, e3);
	cout << "\n\nNEW LIST "  << endl;
	showList(liste);

	deleteAtFront(&liste);
	cout << "\n\nNEW LIST AFTER DELETE AT FRONT"  << endl;
	showList(liste);

	deleteAtBack(&liste);
	cout << "\n\nNEW LIST AFTER DELETE AT BACK"  << endl;
	showList(liste);

	return 0;
}