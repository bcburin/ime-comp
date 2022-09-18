
public class NaturalNumber {

    public static void main(String[] args) {
        int n = Integer.parseInt(args[0]);
        NaturalNumber.printUpTo(n);
    }

    public static void printUpTo(int n) {
        for (int i = 1; i <= n; ++i)
            System.out.print(String.valueOf(i) + (i == n ? '\n' : ' '));
    }

}
