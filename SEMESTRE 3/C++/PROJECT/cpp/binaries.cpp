

#include <fstream>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

typedef struct
{
    char prenom[20];
    char nom[20];
    int age;
} Etudiant;

Etudiant addEtudiant()
{
    Etudiant e;

    cout << "Prenom : ";
    cin >> e.prenom;
    cout << "Nom : ";
    cin >> e.nom;
    cout << "Age : ";
    cin >> e.age;

    return e;
};

int main()
{

    ifstream f("file1.dat", ios::binary | ios::app);
    ofstream temp("temp.dat", ios::binary);
    Etudiant e;

    // char prenomRecherche[20];
    // cout << "Saisir :  ";
    // cin >> prenomRecherche;
    // cout << endl;

    while (f.read((char *)&e, sizeof(Etudiant)))
    {
        // if (strcmp(e.prenom, prenomRecherche) == 0)
        // {
        //     continue;
        // }
        // temp.write((char *)&e, sizeof(char));

        cout << e.prenom << " " << e.nom << " " << e.age << endl;
    }

    f.close();
    temp.close();

    // remove("file1.dat");
    // rename("temp.dat", "file1.dat");

    return 0;
}
