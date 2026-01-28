def inverser(texte):
    liste = list(texte)
    inverse = liste[::-1]
    mot_inverser = "".join(inverse)
    # print(liste)
    # print(inverse)
    print(mot_inverser)
    return mot_inverser
texte=input("entrer un texte")
inverser(texte)

def palindrome(chaine):
    liste = list(chaine)
    inverse = liste[::-1]
    mot_inverser = "".join(inverse)
    if mot_inverser == chaine:
        return True
    else:
        return False
chaine=input("entrer un chaine")
palindrome(chaine)
if palindrome(chaine):
    print(f"la chaine {chaine} est palindrome")
else:
    print(f"le mot {chaine} n'est pas palindrome")

def plus_long(phrase):
    mot=phrase.split()
    maxlong = max(mot, key=len)
    print(f"le mot le plus long de la phrase {phrase}est  {maxlong}")
phrase=input("entrer un phrase")
plus_long(phrase)