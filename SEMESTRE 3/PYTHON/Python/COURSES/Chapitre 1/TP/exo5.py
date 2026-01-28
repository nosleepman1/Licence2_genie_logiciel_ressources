
# Créez une fonction transformer_texte(texte) qui prend une chaîne et retourne :
# a) Le texte avec tous les mots en majuscules
# b) Le texte avec la première et dernière lettre de chaque mot en majuscule
# c) Le nombre de voyelles dans le texte (a, e, i, o, u)
# d) La liste des mots triés par ordre alphabétique
# Exemple : transformer_texte("python est super")
def transformer_texte (chaine) :
    #texte avec tous les mots en majuscule
    majuscule=chaine.upper()
    #premiere et derniere lettre de chaque mot en majuscule
    liste=chaine.split()
    transformer_mots=[mot[0].upper()+mot[1:-1]+mot[-1].upper() for mot in liste]
    transformer_chaine=" ".join(transformer_mots)
    ## nombre de voyelle dans le texte
    voyelles='iuoaeIUOAE'
    nbre_voyelles=sum(1 for char in chaine if char in voyelles )
    #lise triee
    liste_trie=sorted(liste)
    return majuscule,transformer_chaine,nbre_voyelles,liste_trie
chaine=input("entrer une chaine : ")

resultats=transformer_texte(chaine)
print(f"le chaine en majuscule est : {resultats[0]}")
print(f"la 1ere lettre et la derniere lettre de la  chaine en majuscule est : {resultats[1]}")
print(f"le nombre de voyelles est : {resultats[2]}")
print(f"la liste des mots trie est : {resultats[3]}")








