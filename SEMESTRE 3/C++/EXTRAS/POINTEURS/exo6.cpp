/*
Ecrire un programme qui contient les fonctions suivantes :
 -Une fonction qui crée un tableau N pointeurs et chaque cellule contient 
un tableau de M entiers
 -Une fonction qui saisit les N tableaux d'entiers 
 -Une fonction qui affiche le N tableaux d'entiers. 
 -Une fonction qui affiche le minimum de chaque tableau d’entier 
 -Une fonction qui affiche le plus grand nombre premier du tableau 
*/

#include <iostream>
#include <cstdlib>

int **initArrays(int N, int M){
    int** arr = (int**)malloc(N*sizeof(int*));
    
    if(!arr) std::cout << "erreur allocation << std::endl";

    for (int i = 0; i < N; i++)
    {
        arr[i] = (int*)malloc(M*sizeof(int));
        if(!arr[i]) std::cout << "erreur allocation << std::endl";
    }
    return arr;
}

void saisie(int** arr, int N, int M){

    for (int i = 0; i < N; i++)
    {
        std::cout << "Tableau " << i+1 << std::endl;
        for (int j = 0; j < M; j++)
        {
        std::cout << "tab " << i+1 << " [" << j << "] :  " ;
        std::cin >> arr[i][j];
        std::cout << std::endl;
        }
    }
}
void afficher(int** arr, int N, int M){

    for (int i = 0; i < N; i++)
    {
        std::cout << " \n\nTableau " << i+1 << std::endl;
        for (int j = 0; j < M; j++)
        {
        std::cout << "[" << arr[i][j] << "]  " ;
        }
    }
    std::cout <<"------------------------------" << std::endl;
}

void minimum(int** arr, int N, int M){
    int mintab;

    for (int i = 0; i < N; i++)
    {
        mintab = arr[i][0];
        for (int j = 0; j < M; j++)
        {
            if (arr[i][j] < mintab)
            {
                mintab = arr[i][j];
            }   
        }
        std::cout << "Le min du tab " << i+1 << " est:  " << mintab << std::endl;
    }
    std::cout <<"------------------------------" << std::endl;
}

bool estPremier(int val){
    if(val < 2) return false;

    for (int i = 2; i < val; i++)
    {
        if(val % i == 0) return false;
    }
    return true;
}

void plusGrandPremier(int** arr, int N, int M)
{
    int maxPremier = -1;
    bool trouve = false;
   
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (estPremier(arr[i][j]))
            {
                if (!trouve || arr[i][j] > maxPremier)
                {
                    maxPremier = arr[i][j];
                    trouve = true;
                }
            }
        }
    }
    
    if (trouve)
    {
        std::cout << "Le plus grand premier est " << maxPremier << std::endl;
    }else{
        std::cout << "Pas de nombres premier " << std::endl;
    }
}

int main()
{
    int N=3, M=4;
    int** arr = initArrays(N, M);
    saisie(arr, N, M);
    afficher(arr, N, M);
    minimum(arr, N, M);
    plusGrandPremier(arr, N, M);
    return 0;
}


