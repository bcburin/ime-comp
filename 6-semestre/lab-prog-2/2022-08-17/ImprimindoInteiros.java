
public class ImprimindoInteiros {

    public void imprimir(int vetor[]) {
        for (int e : vetor) {
            System.out.println(e);
        }
    }

    public static void main(String[] args) {
        int vetorInt[] = { 1, 2, 3, 4 };

        ImprimindoInteiros exemplo = new ImprimindoInteiros();
        exemplo.imprimir(vetorInt);
    }

}
