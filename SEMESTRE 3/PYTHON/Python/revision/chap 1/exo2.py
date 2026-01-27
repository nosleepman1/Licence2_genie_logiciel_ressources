def manipulation(prenom,nom):

    mail=prenom.lower() + nom.lower()+"@isi.sn" #a revoir
    nb_caract = len(mail)
    inverse = mail[::-1]
    domain = mail.split('@')[1]
    print(mail)
    print(nb_caract)
    print(inverse)
    print(domain)
prenom=input('votre Prenom: ')
nom=input('votre Nom: ')
manipulation(prenom,nom)


