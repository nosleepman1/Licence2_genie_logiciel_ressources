

/**
 *  texte   .txt
 * binaires  .dat | .bin
 * csv       .csv
 *
 * lecture (texte) -> ecriture
 * ecrire (binaire) -> lecture
 * delete | modifier
 *
 * i / o
 *  */

/**
 * Lecture -> ifstream ----- f >> variable  |  geline(f, variable)
 * Ecriture -> ofstream ---- f << variable
 */

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

typedef struct
{
    string prenom, nom;
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
    /**
     * MODIFICATION
     * 1 - creer un ficher temp -- ecriture
     * 2 - boucler sur file.txt
     * 3- A chaque itteration on ecrit la ligne de file.txt dans temp.txt
     * 4 - Une fois arrivée a la ligne recherché
     * 5- On fait la modification puis on ajoute cette ligne modifiée dans temp
     * 6 - A la sortie de la boucle sur file.txt
     * 7 - Tous les elements de file.txt seront dans temps.txt
     * 8 - Supprimer file.txt
     * 9- Renommer temp.txt en file.txt
     */

    /**
     * SUPPRESSION
     * 1 - creer un ficher temp -- ecriture
     * 2 - boucler sur file.txt
     * 3 - A chaque itteration on ecrit la ligne de file.txt dans temp.txt
     * 4 - Dans la condition qui cherche la ligne a supprimer
     * 5 - Si on trouve cette ligne
     * 6 - On l ignore avec l instruction CONTINUE
     *
     */

    ifstream f("file.txt");
    ofstream temp("temp.txt");
    Etudiant e;

    // SUPPRESSION
    string prenomRecherche;
    cout << "Saisir :  ";
    cin >> prenomRecherche;
    cout << endl;

    while (f >> e.prenom >> e.nom >> e.age)
    {
        if (e.prenom == prenomRecherche)
        {
            continue;
        }

        temp << e.prenom << " " << e.nom << " " << e.age << endl;
    }

    f.close();
    temp.close();

    remove("file.txt");
    rename("temp.txt", "file.txt");

    /*Modification de l age du prenom recherché*/
    // string prenomRecherche;
    // cout << "Saisir :  ";
    // cin >> prenomRecherche;
    // cout << endl;

    // while (f >> e.prenom >> e.nom >> e.age)
    // {
    //     if (e.prenom == prenomRecherche)
    //     {
    //         e.age = 23;
    //         e.prenom = "Niokhor";
    //     }
    //     temp << e.prenom << " " << e.nom << " " << e.age << endl;
    // }

    // f.close();
    // temp.close();

    // remove("file.txt");
    // rename("temp.txt", "file.txt");

    return 0;
}
