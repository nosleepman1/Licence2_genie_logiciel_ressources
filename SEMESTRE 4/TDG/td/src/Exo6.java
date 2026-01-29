public class Exo6 {
    public static void main(String[] args) {
        /*
        Déclarez trois variables isSunny , isWarm et isCloudy de type boolean .
        isCloudy aura comme valeur false.
        Utilisez les opérateurs logiques pour déterminer si c'est un jour ensoleillé et
        chaud ou un jour nuageux ou un jour pluvieux.
         */
        boolean isSunny = true;
        boolean isWarm = true;
        boolean isCloudy = false;
        if ((isCloudy || isSunny)  && isWarm)
        {
            System.out.println("c'est un jour ensoleillé et chaud");
        }
        else if(isCloudy && isSunny)
        {

        }
    }
}
