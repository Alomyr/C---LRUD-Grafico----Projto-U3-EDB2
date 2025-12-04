#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
//para gerar o grafico
int main() {

  int N, x = 0, y = 0;
  std::string S;

  std::vector<std::pair<int, int>> posisoes;
  auto inicio = std::chrono::high_resolution_clock::now();

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
      x = x++;

    else if (letra == 'L')
      x = x--;

    else if (letra == 'U')
      y = y++;

    else if (letra == 'D')
      y = y--;

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
  auto fim = std::chrono::high_resolution_clock::now();
  double tempo =
      std::chrono::duration<double, std::milli>(fim - inicio).count();

  // SAÍDA PARA O GRÁFICO
  std::cout << N << " " << tempo << "\n";

  return 0;
}