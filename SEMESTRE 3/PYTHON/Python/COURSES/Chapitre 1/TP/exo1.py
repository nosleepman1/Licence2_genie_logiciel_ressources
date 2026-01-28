nbre1=float(input("entrer un nombre"))
nbre2=float(input("entrer un nombre"))
nbre3=float(input("entrer un nombre"))
print(nbre1,nbre2,nbre3)
moy=abs(nbre1+nbre2+nbre3)/3
print(f"la moyenne est : {moy}")
moygeo=abs(nbre1*nbre2*nbre3)
x=1/3
print(f"la moyenne geometrique est : {moygeo**x}")
print(f"affichage de la moyenne 3 chiffres apres la virgule : {moy:.3f}")
print(f"affichage de la moyenne geometrique 3 chiffres apres la virgule : {moygeo**x:.3f}")
dif=abs(moy-(moygeo**x))
print(f"la difference entre les deux moyenne est : {dif:.3f}")
