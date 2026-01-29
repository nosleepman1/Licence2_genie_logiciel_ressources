import java.util.Scanner;

public class Exo9 {
    public static void main(String[] args) {
        /*
        Ecrire un programme qui permet de saisir le prix unitaire et la quantité puis
        initialise le
        taux TVA à 18%.
        Ce programme calcule :
        le montant HT (prix*qte)
        le montant TTC (1+ MHT*TVA)
         */
        Scanner sc = new Scanner(System.in);
        System.out.print("Saisir le prix unitaire : ");
        int prix_unitaire = sc.nextInt();
        System.out.print("Saisir la quantité : ");
        int quantite = sc.nextInt();
        double TVA = (double) 18 /100;
        int MHT =  prix_unitaire * quantite;
        double TTC = (double) (1 + (MHT*TVA));
        System.out.println("Montant hors taxe " + TTC);


    }
}
