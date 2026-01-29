import java.util.Scanner;

public class Exo7 {
    public static void main(String[] args) {
        /*
        Ecrire un programme qui saisit deux entiers puis calcul et affiche :
        la somme
        le produit
        la division
        le modulo
         */
        Scanner sc = new Scanner(System.in);
        System.out.print("Saisir valeur a : ");
        int a = sc.nextInt();

        System.out.print("Saisir valeur b : ");
        int b = sc.nextInt();
        System.out.println(a + " + " + b + " = " + (a+b));
        System.out.println(a + " % " + b + " = " + (a%b));
        System.out.println(a + " * " + b + " = " + (a*b));
        if(b != 0)
        {
            System.out.println(a + " / " + b + " = " + (a/b));
        }
        else {
            System.out.println("Division par zéro impossible");
        }
    }
}
