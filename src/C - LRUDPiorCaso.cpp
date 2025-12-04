#include <iostream>
#include <string>
#include <utility>
#include <vector>

// TODO: fazer as pior caso e melhor caro e plotar os dados em um grafico;
int main() {

  int N, x = 0, y = 0; // numero de entradas
  std::string S;       // entradas

  std::vector<std::pair<int, int>> posisoes;
  bool repete = false;

  std::cin >> N;

  if (N < 1) { //no can < 1
    return 0;
  } else {
    std::cin >> S;

    if (S.length() != N) { //if S != N break
      return 0;
    }
    posisoes.push_back({0, 0}); //posision init

    for (int i = 0; i < N; i++) { //check val (x,y)
      char letra = S[i];

      if (letra == 'R') {
        x = x + 1;
      } else if (letra == 'L') {
        x = x - 1;
      } else if (letra == 'U') {
        y = y + 1;
      } else if (letra == 'D') {
        y = y - 1;
      }
      //std::cout << "Posicaol: (" << x << ", " << y << ")\n";
      posisoes.push_back({x, y});
    }

    for (int c = 0; c < posisoes.size(); c++) {
      for (int j = c + 1; j < posisoes.size(); j++) {
        if (posisoes[c] == posisoes[j]) {
          repete = true;
        }
      }
    }
    if (repete) {
      std::cout << "Yes";
    } else {
      std::cout << "No";
    }
    return 0;
  }
}