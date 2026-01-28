def statistique_base(l1):
    somme=sum(nbr for nbr in l1)
    moyenne=somme/len(l1)
    etendu=max(l1)-min(l1)
    listetrie=sorted(l1)
    milieu=len(listetrie)//2
    mediane=listetrie[milieu]
    somme_carre=sum(nbr**2 for nbr in l1)

    print(f'la moyenne est : {moyenne:.2f}')
    print(f"l'etendu est : {etendu}")
    print(f"la mediane est : {mediane}")
    print(f"la somme carre est : {somme_carre}")
l1=[1,4,8,9,23,44,11]
statistique_base(l1)
