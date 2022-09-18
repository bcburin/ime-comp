
public class Factorial {

    public static void main(String[] args) {
        int n = Integer.parseInt(args[0]);
        System.out.println(Factorial.calculate(n));
    }

    public static int calculate(int n) {
        if (n < 0)
            throw new IndexOutOfBoundsException("Input must be a non negative integer.");
        int fac = 1;
        for (int i = 1; i <= n; ++i)
            fac *= i;
        return fac;
    }

}
