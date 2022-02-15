#include <iostream>
#include <stack>
#include <string>

using namespace std;

stack<bool> A;
stack<bool> B;
stack<bool> C;

void print_stacks();
void print_stack(stack<bool> stack);
void init_stacks(int stack_size);

int main(int argc, char *argv[]) {
  int size;
  if (argc != 1) {
    cin >> size;
  } else {

  }

  init_stacks(size);
  print_stacks();
}

void init_stacks(int stack_size) {
  for (int i = 0; i != stack_size; i++) 
    A.push(true);
}

void print_stacks() {
  print_stack(A);
  print_stack(B);
  print_stack(C);
}

void print_stack(stack<bool> stack, string name) {
  cout << name + ": ";
  stack<bool> temp;
  while (stack.size() != 0) {
    cout << "| ";
    temp.push(stack.pop());
  }
  while (temp.size() != 0) {
    stack.push(temp.pop());
  }
  cout << "\n";
}