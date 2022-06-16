#ifndef JOGO_DA_FORCA
#define JOGO_DA_FORCA

#define CHANCES_MAX 6

#include <vector>
#include <string>
#include <unordered_set>

using std::vector;
using std::string;
using std::unordered_set;

class JogoDaForca {
  private:
    int chances_usadas;
    vector<string> palavras;
    string palavra_atual;
    unordered_set<char> letras_usadas;
    static const int chances_max;
    bool letra_usada(char letra) { return letras_usadas.find(letra) != letras_usadas.end(); }
  public:
    JogoDaForca(vector<string> palavras);
    void iniciar();
    void mostrar();
    void jogar(char letra);
    bool testeFimdeJogo();
};

#endif