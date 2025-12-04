#include <iostream>
#include <set>
#include <string>
#include <utility>

// algoritmo eficiente
int main() {

  /**
   * @brief
   * N numero de elementos dentro para entrada S
   * S string que determina as direcoes q ele visitou
   *
   */
  int N, x = 0, y = 0;
  std::string S;

  std::set<std::pair<int, int>> myset; // Conjunto para armazenar o par de
                                       // elementos do type pair <ints, int>
  bool repete = false;

  std::cin >> N;
  std::cin >> S;

  if (N < 1 or S.length() != N) { // valida se a entrada esta de acordo
    return 0;
  }
  myset.insert({0, 0}); /// insera a origem

  for (int i = 0; i < N; i++) { /// verificar as letras e cria as coordenadas
    char letra = S[i];

    if (letra == 'R')
      x++;

    else if (letra == 'L')
      x--;

    else if (letra == 'U')
      y++;

    else if (letra == 'D')
      y--;

    // std::cout << "Posicaol: (" << x << ", " << y << ")\n";

    // O(n log n)
    if (myset.find({x, y}) != myset.end()) { /// se o pair de elementos ja estiver no conjunto vai
                       /// informar que Takahashi ja visitou
      repete = true;
      break;
    }
    myset.insert({x, y}); /// caso o if => false insira o pair no conjunto
  }

  if (repete) {
    std::cout << "Yes";
  } else {
    std::cout << "No";
  }
  return 0;
}