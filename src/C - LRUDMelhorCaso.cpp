#include <iostream>
#include <set>
#include <string>
#include <utility>
#include <vector>

int main() {

  int N, x = 0, y = 0; // numero de entradas
  std::string S;       // entradas

  std::set<std::pair<int, int>> myset;
  bool repete = false;

  std::cin >> N;

  if (N < 1) { // no can < 1
    return 0;
  } else {
    std::cin >> S;

    if (S.length() != N) { // if S != N break
      return 0;
    }

    myset.insert({0, 0});

    for (int i = 0; i < N; i++) { // check val (x,y)
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
      // std::cout << "Posicaol: (" << x << ", " << y << ")\n";
      if(myset.find({x,y}) != myset.end()){
        repete =true;
        break;
      }
      myset.insert({x,y});
    }

    if (repete) {
      std::cout << "Yes";
    } else {
      std::cout << "No";
    }
    return 0;
  }
}