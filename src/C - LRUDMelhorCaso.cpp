#include <iostream>
#include <set>
#include <string>
#include <utility>

int main() {

  int N, x = 0, y = 0;
  std::string S;

  std::set<std::pair<int, int>> myset;
  bool repete = false;

  std::cin >> N;
  std::cin >> S;

  if (N < 1 or S.length() != N) {
    return 0;
  }
  myset.insert({0, 0});

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
    if (myset.find({x, y}) != myset.end()) {
      repete = true;
      break;
    }
    myset.insert({x, y});
  }

  if (repete) {
    std::cout << "Yes";
  } else {
    std::cout << "No";
  }
  return 0;
}