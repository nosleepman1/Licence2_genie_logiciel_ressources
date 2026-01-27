##ecrire une fonction qui prend un entier en argument et
##retourne True si le nombre est premier
def estpremier(nbre):
    cpt = 0
    for i in range(1,nbre+1):
        if nbre % i == 0 :
            cpt +=1
    if cpt==2 :
        return True
    else:
        return False
nbre=int(input("entrer un nombre entier"))
if estpremier(nbre):
    print("le nombre est premier")
else:
    print("le nombre n'est pas premier")

# ecrire un fonction premier qui prend enargument une liste et qui
# retourne une liste contenant la somme des nombre pairs et
# le produit des nombres impairs
