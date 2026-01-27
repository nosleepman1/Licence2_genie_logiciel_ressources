
def operation(liste1, liste2):
    f=liste1+liste2
    # return f
    somme=sum(f)
    nb=len(f)
    moyenne=somme/nb
    print(f"la liste fusionee est : {f}")
    print(f"la somme de la liste est : {somme}")
    print(f"la moyenne de la liste est : {moyenne}")
    trie=sorted(f)
    first=trie[0]
    last=trie[-1]
    print(f"la liste trie est : {trie}")
    print(f"le premier element de la liste trie est : {first}")
    print(f"le dernier element de la liste trie est : {last}")
liste1 = [5, 12, 8, 3, 17]
liste2 = [2, 4, 6, 8, 10]
operation(liste1, liste2)
# print(operation(liste1, liste2))
