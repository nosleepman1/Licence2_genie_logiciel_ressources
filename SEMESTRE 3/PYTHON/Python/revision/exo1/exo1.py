def analyse(texte):
    nb_mot=len(texte)
    nb_python=texte.count("python")
    remplacer=texte.lower().replace("python","java")
    return nb_mot,nb_python,remplacer
texte="python est genial et python est super"
result=analyse(texte)
print(f"long : {result[0]}")
print(f"nbpython : {result[1]}")
print(f"remplace : {result[2]}")