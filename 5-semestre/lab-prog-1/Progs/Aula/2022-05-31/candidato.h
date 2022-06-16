#include <iostream>

using std::string;
using std::ostream;
using std::istream;

struct candidato {
  int id;
  string nome;
  string partido;
  int votos = 0;
  static int total;
  struct menor { bool operator() (const candidato&, const candidato&); };
};

ostream& operator<< (ostream& os, const candidato& cand);
istream& operator>> (istream& is, candidato& cand);