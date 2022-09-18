package ex;

import java.lang.reflect.Array;

public class PilhaVetor<T> {
    private int max_size;
    private int top;
    private T[] pilha;

    public PilhaVetor(int max_size) {
        this.max_size = max_size;
        this.top = -1;
        this.pilha = (T[]) new Object[max_size];
    }

    public boolean push(T data) {
        if (top + 1 == max_size)
            return false;
        pilha[++top] = data;
        return true;
    }

    public T pop() {
        if (top == -1) {
            /* throw error */
        }
        return pilha[top--];
    }

    public T peek() {
        if (top == -1) {
            /* throw error */
        }
        return pilha[top];
    }

}