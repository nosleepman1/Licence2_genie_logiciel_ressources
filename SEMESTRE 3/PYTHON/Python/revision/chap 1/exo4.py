def statistique_de_base(nombre):
    somme=sum(nbr for nbr in nombre)
    moyenne=somme/len(nombre)
    etendue = max(nombre) - min(nombre)
    sommecare=sum(nbre**2 for nbre in nombre )
    print(f"la somme des nombres de la liste est : {somme}")
    print(f"la omyenne des nombres de la liste est : {moyenne}")
    print(f"l'etendue des nombres de la liste est : {etendue}")
    print(f"la somme carree des nombres de la liste est : {sommecare}")
nombre=[1,4,3,8,6,6,5]
statistique_de_base(nombre)