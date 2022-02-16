#include <iostream>
#include <vector>
#include <string>

#define MAX_STACK_SIZE 15

using namespace std;

/* Declaracao das pilhas que representam cada torre
 * Preferiu-se usar vector ao inves de stack para poder imprimi-las mais facilmente 
 */
vector<int> A;
vector<int> B;
vector<int> C;

/* Variavel global que armazena passo atual na resolucao da torre de Hanoi */
int step = 0;

/* Declaracao de funcoes basicas */
void init_stacks(int stack_size);
void print_stacks(int step);
void print_stack(const vector<int> &stack, const string &name);

/* Funcao que move um disco do topo de uma torre ao topo de outra */
void move(vector<int> &from, vector<int> &to);

/* Funcao recursiva que move n discos de uma torre a outra usando uma terceira como auxiliar */
void move(int number, vector<int> &from, vector<int> &to, vector<int> &aux);


int main(int argc, char *argv[]) {
  int size = 0;

  /* Caso nenhum argumento tenha sido fornecido na execucao, pedi-lo ao usuario */
  if (argc == 1) {
    cout << "Insira o tamanho da torre de Hanoi: ";
    cin >> size;
  }
  
  /* Utilizar argumento fornecido na execucao */
  if (argc >= 2) {
    size = stoi(argv[1]);
  }

  /* Validacao de entrada */
  if (size < 0 || size >= MAX_STACK_SIZE)
    return 1;

  /* Inicializar e imprimir as pilhas que representam cada torre */
  init_stacks(size);
  print_stacks(step);

  /* Resolver recursivamente a torre de Hanoi */
  move(size, A, B, C);

  return 0;
}

void init_stacks(int stack_size) {
  /* Preenche a pilha A com os numeros de stack_size a 1 em ordem decrescente */
  for (int i = stack_size; i != 0; --i) {
    A.push_back(i);
  }
}

void print_stacks(int step) {
  if (step == 0)
    cout << "\n-----------" << "  INICIO  "  <<"-----------\n";
  else
    cout << "\n-----------" << " PASSO "  << step << " -----------\n";
  print_stack(A, "A");
  print_stack(B, "B");
  print_stack(C, "C");
  cout << "--------------------------------\n";
}

void print_stack(const vector<int> &stack, const string &name) {
  cout << name + ": ";
  for (auto &x : stack)
     cout << "|" << x << "| ";
  cout << "\n";
}

void move(vector<int> &from, vector<int> &to) {
  to.push_back(from.back());
  from.pop_back();
}

void move(int number, vector<int> &from, vector<int> &to, vector<int> &aux) {
  if (number == 1) {
    move(from, to);
    print_stacks(++step);
    return;
  }
  
  move(number-1, from, aux, to);
  move(1, from, to, aux);
  move(number-1, aux, to, from);
}