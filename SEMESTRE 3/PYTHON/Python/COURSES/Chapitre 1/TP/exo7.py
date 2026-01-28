def convertir_secondes(nombre):
    jours=nombre//86400
    restej=nombre%86400
    heures=restej//3600
    resteh=restej%3600
    minutes=resteh//60
    secondes=resteh%60
    print(f"le nombre de jours est : {jours } , l'heure est : {heures } , la minute est : {minutes } et les secondes sont :{secondes }")
nombre=int(input("entrer un nombre :"))
convertir_secondes(nombre)
