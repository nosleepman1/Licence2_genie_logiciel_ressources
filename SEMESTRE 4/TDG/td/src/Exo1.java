public class Exo1 {
    public static void main(String[] args) {
        //Integer-int
        Integer var1 = Integer.valueOf(14);
        System.out.println(var1.getClass());
        int var2 = var1.intValue();
        System.out.println(var2);

        //Double - double
        Double var3 =  Double.valueOf(10.0);
        System.out.println(var3);
        double var4 = var3.doubleValue();
        System.out.println(var4);
    }
}
