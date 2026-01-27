def manipule_matrice(matrice):

    somme_col = [sum(ligne) for ligne in matrice]
    nb_col = len(matrice[0])
    nb_ligne = len(matrice)
    for j in range(nb_col):
        somme = 0
        for i in range(nb_ligne):
            somme += matrice[i][j]
        print(somme)
matrice = [
        [1, 2, 3],
        [4, 5, 6],
        [7, 8, 9]
    ]
manipule_matrice(matrice)
