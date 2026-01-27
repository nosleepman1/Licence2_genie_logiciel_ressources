def somme_ligne(matrice):
    somligne=[sum(ligne) for ligne in matrice]
    return somligne
matrice =[
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
    ]
somme_ligne(matrice)
print(f"la somme des ligne de la matrice est {somme_ligne(matrice)} ")

def somme_colonne(matrice):
    nbcolonne=len(matrice[0])
    somcolonne=[sum (ligne[i] for ligne in matrice) for i in range(nbcolonne)]
    return somcolonne
somme_colonne(matrice)
print(f"la somme des colonnes de la matrice est {somme_colonne(matrice)} ")