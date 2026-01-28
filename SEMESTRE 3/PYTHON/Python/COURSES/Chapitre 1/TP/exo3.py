liste1 = [5, 12, 8, 3, 17]
liste2 = [2, 4, 6, 8, 10]
fusion_liste=liste1+liste2
print(f"la liste fusionne est : {fusion_liste}")
fusion_liste.sort()
print(f"la liste trie est : {fusion_liste}")
somme=sum(fusion_liste)
print(f"la somme des element de la liste est : {somme}")
moy=somme/(len(fusion_liste))
print(f'la moyenne des elements de la liste est : {moy}')
first=fusion_liste[0]
print(f"le premier element de la liste est : {first}")
last=fusion_liste[-1]
print(f"le dernier element de la liste est : {last}")
