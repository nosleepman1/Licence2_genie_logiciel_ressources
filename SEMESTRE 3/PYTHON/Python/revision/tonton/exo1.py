def manipuler_liste(notes):
    maxim = max(notes)
    minim = min(notes)
    somme = sum((nbre) for nbre in notes)
    moyenne = somme / len(notes)
    supinf10 = (nbre for nbre in notes if nbre > 10)
    trie_liste = sorted(supinf10, reverse=True)
    return maxim, minim, moyenne, trie_liste
notes=[12,8,15,9,18,7,14]
result = manipuler_liste(notes)
print(f"la note maximal est: {result[0]}")
print(f"la note minimal est: {result[1]}")
print(f"la moyenne est: {result[2]}")
print(f"la liste trie dans l'ordre decroissant est : {result[3]}")