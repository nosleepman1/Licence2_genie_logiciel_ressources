import java.util.ArrayList;
import java.util.Scanner;
import java.util.Vector;

public class Exo10 {
    public static void main(String[] args) {
        /*
        Ecrire un programme qui permet la saisie de 2 entiers et deux réels puis
        détermine et
        affiche:
        Série 1: Java Base 3
        la valeur la plus petite et la plus grande
        les deux valeurs les plus grands
        les deux valeurs les plus petites
        les deux valeurs intermédiaires
         */
        Scanner sc = new Scanner(System.in);
        int val1,val2;
        double val3, val4;
        System.out.print("Saisir entier 1 : ");
        val1 = sc.nextInt();
        System.out.print("Saisir entier 2 : ");
        val2 = sc.nextInt();
        System.out.print("Saisir réel 1 : ");
        val3 = sc.nextDouble();
        System.out.print("Saisir réel 2 : ");
        val4 = sc.nextDouble();
        double val5 = val1;
        double val6 = val2;
        Vector<Double> ma_liste = new Vector<Double>();
        ma_liste.add(val5);
        ma_liste.add(val6);
        ma_liste.add(val3);
        ma_liste.add(val4);
    }
}
