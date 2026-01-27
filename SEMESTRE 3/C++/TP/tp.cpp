#include <iostream>
using namespace std;

int **creerMatrice(int L, int C) {

	int **mat = new int*[L];

	for (int i = 0; i < L; i++)
	{
		mat[i] = new int[C];
	}
	return mat;
}

void remplirMat(int **mat, int L, int C) {
	for (int i = 0; i < L; i++)
	{
		for (int j = 0; j < C; j++)
		{
			cout << "\n[" << i+1 << "][" << j+1 << "] : ";
			cin >> mat[i][j];
		}
	}
}


void trierColone(int **mat, int L, int C) {

	for (int i = 0; i < L; i++)
	{
		int temp;
		for (int j = 0; j < L; j++)
		{
			if (mat[i][0] < mat[j][0])
			{
				temp = mat[i][0];
				mat[i][0] = mat[j][0];
				mat[j][0] = temp;
			}
		}
	}
}

void inverser(int **mat, int L, int C) {
	int temp;
	for (int i = 0; i < L/2; i++)
	{
		temp = mat[i][C-1];
		mat[i][C-1] = mat[L-1-i][C-1];
		mat[L-1-i][C-1] = temp;
	}
}


void afficher(int **mat, int L, int C) {
	cout << "\n\nAffichage\n";
	for (int i = 0; i < L; i++)
	{
		for (int j = 0; j < C; j++)
		{
			cout << "[" << mat[i][j] << "]";
		}
		cout << "\n";
	}
}


int main(int argc, char const *argv[])
{
	
	
	int L = 3, C=3;

	int **mat = creerMatrice(L, C);

	remplirMat(mat, L, C);

	afficher(mat, L, C);

	trierColone(mat, L, C);

	afficher(mat, L, C);

	delete[] mat;

	return 0;
}