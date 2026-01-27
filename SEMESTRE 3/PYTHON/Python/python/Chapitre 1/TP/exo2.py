

def traitement_email(prenom,nom):
    mail = prenom.lower() + nom.lower() + f"@isi.sn"
    inverse = mail[::-1]
    nbre_total_caratere = mail.count("")
    domaine = mail[-6::1]

    # email.split('@')[1] il va separer l'email
    print(f"l'email est {mail}")
    print(f"le nombre de caractere dans l'email est {nbre_total_caratere}")
    print(f"l'email renverse est : {inverse}")

    print(f"extrait de l'email apres @ est : {domaine}")

prenom = input("entrer votre prenom : ")
nom = input("entrer votre nom : ")
traitement_email(prenom,nom)