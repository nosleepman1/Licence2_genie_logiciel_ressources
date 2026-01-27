# a) Calcule le nombre de jours
# b) Calcule le nombre d’heures restantes
# c) Calcule le nombre de minutes restantes
# d) Calcule le nombre de secondes restantes
# e) Retourne une chaîne formatée : "X jours, Y heures, Z minutes, W secondes"
# Exemple :convertir_secondes(90061) →"1 jours, 1 heures, 1 minutes, 1 secondes"
# Astuce : Utilisez les opérateurs // (division entière) et % (modulo)
import os
os.system('cls')
# def convertir_secondes(nombre):
#     jours=nombre//86400
#     restej=nombre%86400
#     heures=restej//3600
#     resteh=restej%3600
#     minutes=resteh//60
#     secondes=resteh%60
#     print(f"le nombre de jours est {jours},l'heure est : {heures}, la minute est : {minutes} et les secondes sont :{secondes}")
# nombre=int(input("entrer un nombre :"))
# convertir_secondes(nombre)

# Créez les fonctions suivantes qui travaillent avec des chaînes :
# a) inverser(texte) : Inverse une chaîne
# b) est_palindrome(texte) : Retourne True si le texte est identique à son inverse
# c) plus_long_mot(phrase) : Retourne le mot le plus long d’une phras
# def inverser(texte):
#     liste=texte.split(" ")
#     inverse=liste[::-1]
#     print(f"le texte inverser est : {inverse}")
# texte=input("entrer un texte : ")
# # print(liste)
# # print(inverse)
# inverser(texte) 
# def estpalindrome(chaine):
chaine=input("entrer une chaine :")
liste=chaine.split(" ")
inv=liste[::-1]
mot=' '.join(inv)
print(liste)
print(inv)
print(mot)
    # if(chaine==mot):
    #     return True
    # else:
    #     return False
    
# chaine=input("entrer une chaine :")

# estpalindrome(chaine)
# if(estpalindrome):
#     print("la chaine est palindrome")
# else:
#     print("la chaine n'est pas palindrome")
