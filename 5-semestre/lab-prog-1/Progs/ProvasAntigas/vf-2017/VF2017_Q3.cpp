#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>

using std::string;
using std::ostringstream;
using std::ofstream;
using std::ifstream;
using std::ostream;
using std::istream;
using std::ios;

struct MultiString {
  char nome1[20];
  string nome2;
  ostringstream nome3;
};

bool salvabin(MultiString& ms, char* arq_nome);
bool carregabin(MultiString& ms, char* arq_nome);

/* Funcoes auxiliares */
void write_str(ofstream& file, string str);
string read_str(ifstream& file);


int main() {
  char filename[16] = "str.bin";

  MultiString ms;
  strcpy(ms.nome1, "TestData0330a22");
  ms.nome2 = "TestData332b21";
  ms.nome3 << "TestData8450c3";

  if(!salvabin(ms, filename)) return EXIT_FAILURE;

  MultiString ms_other;

  if(!carregabin(ms_other, filename)) return EXIT_FAILURE;

  std::cout << "nome1: " << ms_other.nome1 << std::endl
            << "nome2: " << ms_other.nome2 << std::endl
            << "nome3: " << ms_other.nome3.str() << std::endl;

  return EXIT_SUCCESS;
}



/* IMPLEMENTACOES */


bool salvabin(MultiString& ms, char* arq_nome) {
  ofstream str_out(arq_nome, ios::out | ios::binary);
  
  if(!str_out.is_open()) return false;
  
  write_str(str_out, ms.nome1);
  write_str(str_out, ms.nome2);
  write_str(str_out, ms.nome3.str());

  str_out.close();

  return true;
}


bool carregabin(MultiString& ms, char* arq_nome) {
  ifstream str_in(arq_nome, ios::in | ios::binary);
  
  if(!str_in.is_open()) return false;

  strcpy(ms.nome1, read_str(str_in).c_str());
  ms.nome2 = read_str(str_in);
  ms.nome3 << read_str(str_in);

  str_in.close();

  return true;
}


void write_str(ofstream& file, string str) {
  int size = str.size();
  file.write((char*) &size, sizeof(int));
  file.write(str.c_str(), size+1);
}


string read_str(ifstream& file) {
  int size;
  file.read((char*) &size, sizeof(int));
  char str[size+1];
  file.read(str, size+1);
  return string(str);
}

