def liste_sans_dounlon(nombres):
    sup_doublons = []
    for nbre in nombres:
        if nbre not in sup_doublons:
            sup_doublons.append(nbre)

nombres = [1, 2, 3, 2, 4, 1, 5, 3]
liste_sans_dounlon(nombres)
