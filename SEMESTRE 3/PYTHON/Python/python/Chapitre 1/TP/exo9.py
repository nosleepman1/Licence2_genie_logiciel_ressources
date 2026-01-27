def operation_liste(liste):
    for element in liste:
        mult=element*2
        print(f"{element} multiplie par 2 est : {mult}")
        if(mult <0):
            valeur=abs(element)
            print(f"la valeur absolue de {element}  est : {valeur} ")

    print(f"la liste trie est : {sorted(liste)}")
liste=[1,2,-3,6,-7,23,9,-4,6]
operation_liste(liste)