


def analyse(texte):
    nb_mot=len(texte)
    nb_python=texte.lower().len("python")
    remplacer=texte.replace("python","java")
    snack=texte.join("_")
    return nb_mot,nb_python,remplacer,snack
texte="python est puissant et python est facile"
result=analyse(texte)
print(f"le nombre de mot et dans le texte : {result[0]}")
print(f"le nombre de python  dans le texte : {result[1]}")
print(f"le nombre de mot dans le texte : {result[2]}")