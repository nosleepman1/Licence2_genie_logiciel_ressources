
def annalyser_phrase(phrase):
    nb_caracteres=len(phrase)
    nb_sans_espace=len(phrase.strip())
    phrase_en_liste=phrase.split()
    nb_mot=len(phrase_en_liste)
    longueur=nb_mot/nb_caracteres
    mot_long=max(phrase_en_liste,key=len)
    mot_court=min(phrase_en_liste,key=len)
    print(f"nb_caracteres {nb_caracteres}")
    print(f"nb_sans_espace {nb_sans_espace}")
    print("phrase_en_liste {phrase_en_liste}")
    print(f"nb_mot {nb_mot}")
    print(f"la longueur moyenne  {longueur}")
    print(f"le mot le plus long  {mot_long}")
    print(f"le mot le plus court  {mot_court}")
    return nb_caracteres,nb_sans_espace,nb_mot,longueur,mot_long,mot_court

phrase=input("entrer la phrase")
annalyser_phrase(phrase)