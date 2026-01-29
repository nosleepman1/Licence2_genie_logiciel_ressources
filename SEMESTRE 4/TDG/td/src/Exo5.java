import java.io.BufferedInputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;

public class Exo5 {
    public static void main(String[] args) throws IOException {
        /*
        Calculez la somme de deux nombres entiers a et b (par exemple, 10 et 5) et
        stockez le résultat dans une variable sum .
        Utilisez l'opérateur d'incrémentation pour augmenter la valeur de sum de 3.
         */
        BufferedReader keyboard = new BufferedReader(new InputStreamReader(System.in));
        Scanner sc = new Scanner(System.in);
        System.out.print("Saisir valeur a : ");
        int a = sc.nextInt();
        System.out.println("Valeur de a : " + a);
        System.out.print("Saisir valeur b : ");
        int b = Integer.parseInt(keyboard.readLine());
        System.out.println("valeur de b : " + b);
        int somme = a + b;
        System.out.println(a + " + " + b + " = " + (a+b));
    }
}
