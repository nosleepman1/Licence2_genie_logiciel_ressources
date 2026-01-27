
def transformer_texte(texte):
    textemaj=texte.upper()
    liste=texte.split()
    maj_min=[mot[0].upper()+mot[1:-1]+mot[-1].upper() for mot in liste]
    transforme=" ".join(maj_min)
    voyelle = "iuoaeIUOAE"
    cherchevoyelle = sum(1 for nbre in texte if nbre in voyelle)
    liste_trie = sorted(liste)
    return textemaj,transforme,cherchevoyelle,liste_trie
texte=input('votre texte: ')
result=transformer_texte(texte)
print(f"le texte en majuscule est : {result[0]}")
print(f"le texte avec la première et dernière lettre de chaque mot en majuscule : {result[1]}")
print(f"le nombre de voyelle est : {result[2]}")
print(f"la liste trie est : {result[3]}")

