/*
Ecrire un programme qui contient les fonctions suivantes :
-Une fonction qui crée un tableau N pointeurs et chaque cellule contient un tableau de M entiers 
-Une fonction qui saisit les N tableaux d'entiers 

NB: 1-Dans un tableau d'entier il n'y a pas de doublons 
2-Les positions pairs du tableau T contiennent des impaires et les positions impaires 
contiennent des valeurs paires.
 -Une fonction qui affiche les N tableaux d'entiers.
*/

#include <iostream>
#include <cstdlib>
#include <cstddef>
using namespace std;

int** initArrays(int N, int M){

    int** arrays = (int**) malloc(N * sizeof(int*));

    for (int i = 0; i < N; i++)
    {
        arrays[i] = (int*) malloc (M * sizeof(int));
        if (!arrays[i])
        {
            cout << "Erreur allocation";
        }
    }
    return arrays;
}

bool verifDoublouns(int* array, int taille, int val){
   
    for (int i = 0; i < taille; i++)
    {
        if (array[i] == val)
        {
            return true;
        }
        
    }
    return false;    
}

void remplissage(int** tab, int N, int M){
    for (int i = 0; i < N; i++)
    {
        cout << "Tableau " << i+1 << endl;

        for (int j = 0; j < M; j++)
        {
            int val;
            bool ok = false;

            do
            {
                cout << "Tab [" << j << "] :  ";
                cin >> val;

                if (j % 2 == 0 && val % 2 == 0)
                {
                    cout << "Pos paire -> nombre impair" << endl;
                } 
                else if (j % 2 == 1 && val % 2 == 1)
                {
                    cout << "Pos impaire -> nombre pair" << endl;

                } else if (verifDoublouns(tab[j], j, val))
                {
                    cout << "Pas de doublons autorises" << endl;
                }else{
                    ok = true;
                }
            } while (!ok);

            tab[i][j] = val;
        }
    }
}

void affichage(int** tab, int N, int M){
    for (int i = 0; i < N; i++)
    {
        cout << "Tableau " << i+1 << endl;
        for (int j = 0; j < M; j++)
        {
            cout << "[" << tab[i][j] << "]  ";
        }
        cout << "\n" << endl;
    }
}


int main()
{
    int M = 3, N = 3;
    int** array = initArrays(N, M);

    remplissage(array, N, M);

    affichage(array, N, M);

    return 0;
}
