public class Exo3 {
    public static void main(String[] args) {
        /*
        * Convertissez un int en double .
        Convertissez une String en int .
        Convertissez un double en String
        * */
        //int to double
        int a = 5;
        System.out.println("Valeur (int) de a : " + a);
        double b = (double)a ;
        System.out.println("Valeur double de a : " + b);

        //string to int
        String chaine = "1234";
        System.out.println("Valeur de la chaine : " + chaine);
        int entier_chaine = Integer.parseInt(chaine);
        System.out.println("Valeur de la chaine en entier : " + entier_chaine);

        //double to string
        double taille = 5.0;
        System.out.println("taille : " + taille);
        String taille_str = Double.toString(taille);
        System.out.println("taille_str : " + taille);
    }
}
