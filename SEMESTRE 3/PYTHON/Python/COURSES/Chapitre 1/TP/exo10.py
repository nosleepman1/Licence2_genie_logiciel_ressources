def calculer_facture(prix_ht,taux_tva,remise):
    tva=prix_ht*(taux_tva)/100
    ttc=prix_ht+tva
    remise_montant=ttc*(remise)/100
    montant_final=ttc-remise_montant
    print(f"le montant en tva est :{abs(tva):.2f}")
    print(f"le montant tout transport comprise est :{abs(ttc):.2f}")
    print(f"le montant remise est : {abs(remise_montant):.2f}")
    print(f"le montant {abs(montant_final):.2f} ")
    return tva,ttc,montant_final
prix_ht=float(input("entrer le prix hors transport"))
taux_tva=float(input("entrer le taux tva "))
remise=float(input("entrer la remise"))
calculer_facture(prix_ht,taux_tva,remise)