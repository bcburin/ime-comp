
public class PiNumber {

    public static void main(String[] args) {
        // Get command line arguments
        int method = Integer.parseInt(args[0]);
        int iters = Integer.parseInt(args[1]);
        // Calculate Pi according to selected method
        double pi = -1;
        switch (method) {
            case 0:
                pi = PiNumber.byViete(iters);
                break;
            case 1:
                pi = PiNumber.byWallis(iters);
                break;
            case 2:
                pi = PiNumber.byLeibniz(iters);
                break;
            default:
                System.out.println("Invalid method!");
                return;
        }
        System.out.println(pi);
    }

    private static double getVieteAux(int k) {
        if (k == 1)
            return 0;
        return Math.sqrt(2 + getVieteAux(k - 1));
    }

    public static double byViete(int iters) {
        return Math.pow(2, iters) * Math.sqrt(2 - getVieteAux(iters));
    }

    public static double byWallis(int iters) {
        double pi = 1;
        for (int i = 1; i <= iters; ++i) {
            double aux = 4 * i * i;
            pi *= aux / (aux - 1);
        }
        return pi * 2;
    }

    public static double byLeibniz(int iters) {
        double pi = 0;
        for (int i = 0; i != iters; ++i) {
            pi += (i % 2 == 0 ? 1.0 : -1.0) / (2 * i + 1);
        }
        return pi * 4;
    }

    // public static double byLambert(int iters) {
    // double pi = 1
    // }

}
