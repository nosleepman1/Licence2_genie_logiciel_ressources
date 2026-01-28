print("----------CALCULATRICE----------")
nbre=float(input("entrer un nombre : "))
nbre2=float(input("entrer un 2e nombre : "))
opert=input("entrer un operateur : ")
match opert:
    case '+':
        somme=nbre+nbre2
        print(f" somme {somme}")
    case '-':
        diff=nbre-nbre2
        print(f"difference {diff}")
    case '*':
        multip=nbre*nbre2
        print(f"multiplication  {multip}")
    case'**':
        puissance=nbre**nbre2
        print(f"puissance  {puissance}")
    case '/':
        if nbre2==0 :
            print("impossible")
        else:
            divreel=nbre/nbre2
            print(f"division reel {divreel}")
    case '%':
        if nbre2==0 :
            print("impossible")
        else:
            modulo=nbre%nbre2
            print(f"modulo de la division  {modulo}")
    case '//':
        if nbre2==0 :
            print("impossible")
        else:
            diventier=nbre//nbre2
            print(f"division entier {diventier}")
    case _:
        print("operateur non existante")

