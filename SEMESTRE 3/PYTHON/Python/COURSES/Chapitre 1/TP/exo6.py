def somme_ligne(matrice):
   somme=[sum(ligne) for ligne in matrice]
   return somme
matrice=[
    [1,2,3],
    [4,5,6],
    [7,8,9]
]
somme_ligne(matrice)
print(somme_ligne(matrice))
def somme_colonne(matrices):
    nb_colonne = len(matrices[0])
    somme = [sum(ligne[i] for ligne in matrices) for i in range(nb_colonne)]
    return somme

matrice=[
    [1,2,3],
    [4,5,6],
    [7,8,9]
]
somme_colonne(matrice)
print(somme_colonne(matrice))
