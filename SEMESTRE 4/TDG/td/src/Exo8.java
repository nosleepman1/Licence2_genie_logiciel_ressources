import java.util.Scanner;

public class Exo8 {
    public static void main(String[] args) {
        /*
        Même principe que l'exo 7 sauf que là ça sera présenté sous forme de menu :
        1- la somme
        2- le produit
        3- la division
        4- le modulo
        5- Quitter
         */
        String MENU = """
                1- la somme
                2- le produit
                3- la division
                4- le modulo
                5- Quitter
                """;
        int a,b;
        while (true){
            System.out.println(MENU);
            System.out.print("votre choix : ");
            Scanner sc = new Scanner(System.in);
            int choix = sc.nextInt();
            if (choix == 5){
                break;
            }
            switch (choix){
                case 1:
                    System.out.print("Saisir valeur a : ");
                    a = sc.nextInt();
                    System.out.print("Saisir valeur b : ");
                    b = sc.nextInt();
                    System.out.println(a + " + " + b + " = " + (a+b));
                    break;
                case 2:
                    System.out.print("Saisir valeur a : ");
                    a = sc.nextInt();
                    System.out.print("Saisir valeur b : ");
                    b = sc.nextInt();
                    System.out.println(a + " * " + b + " = " + (a*b));
                    break;
                case 3:
                    System.out.print("Saisir valeur a : ");
                    a = sc.nextInt();
                    System.out.print("Saisir valeur b : ");
                    b = sc.nextInt();

                    if(b != 0)
                    {
                        System.out.println(a + " / " + b + " = " + (a/b));
                    }
                    else {
                        System.out.println("Division par zéro impossible");
                    }
                    break;
                case 4:
                    System.out.print("Saisir valeur a : ");
                    a = sc.nextInt();
                    System.out.print("Saisir valeur b : ");
                    b = sc.nextInt();
                    System.out.println(a + " % " + b + " = " + (a%b));
                    break;
                case 5:
                    System.out.println("Au revoir");
                    break;

                default:
                    System.out.println("choix incorrect");

            }
        }


    }
}
