#include <iostream>
#include <string>
#include <utility>
#include <vector>

int main() {

  int N, x = 0, y = 0;
  std::string S;

  std::vector<std::pair<int, int>> posisoes;
  bool repete = false;

  std::cin >> N;
  std::cin >> S;

  if (N < 1 or S.length() != N) {
    return 0;
  }
  posisoes.push_back({0, 0});

  for (int i = 0; i < N; i++) {
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