#include <iostream>
#include <string>
using namespace std; 

typedef struct {
	string prenom;
	string nom;
	int age;
}etudiant;


typedef struct node {
	etudiant value;
	struct node* next;
	struct node* prev;
	node(etudiant e) : value(e), next(nullptr), prev(nullptr) {}
}node;

typedef struct list {
	node *first;
	node *last;
	list() : first(nullptr), last(nullptr) {}
}list;

list *initList(){
	list *liste = new list;
	return liste;
}

bool isEmpty(list *li) {
	return li->first == nullptr && li->last == nullptr;
}


void afficherEtudiant(etudiant e){
	cout << e.prenom << " " << e.nom << " " << e.age <<endl;
}

void instertAtFront(list **li, etudiant value) {
	node *newNode = new node(value);

	if (isEmpty(*li))
	{
		(*li)->first = newNode;
		(*li)->last = newNode;
		return;
	}

	newNode->next = (*li)->first;
	(*li)->first->prev = newNode;
	(*li)->first = newNode;
}

void showList(list *li) {

	node* temp = li->first;

	while(temp != nullptr){
		afficherEtudiant(temp->value);
		temp = temp->next;
	}
}


void instertAtBack(list **li, etudiant e) {

	node* newNode = new node(e);

	if (isEmpty(*li))
	{
		(*li)->first = newNode;
		(*li)->last = newNode;
		return;
	}

	newNode->prev = (*li)->last;
	(*li)->last->next = newNode;
	(*li)->last = newNode;
}


void deleteAtFront(list **li) {

	if (isEmpty(*li))
	{
		cout << "Liste deja vide" << endl;
		return;
	}

	node *toDelete = (*li)->first;

	if ((*li)->first == (*li)->last)
	{
		(*li)->first = nullptr;
		(*li)->last = nullptr;
		delete toDelete;
		return;
	}

	(*li)->first = (*li)->first->next;
	(*li)->first->prev = nullptr;
	delete toDelete;
}

void deleteAtBack(list **li) {

	if (isEmpty(*li))
	{
		cout << "Liste deja vide" << endl;
		return;
	}

	node *toDelete = (*li)->last;

	if ((*li)->last->prev == nullptr)
	{
		(*li)->first = nullptr;
		(*li)->last = nullptr;
		delete toDelete;
	}

	(*li)->last = (*li)->last->prev;
	(*li)->last->next = nullptr;
	delete toDelete;
	
}
