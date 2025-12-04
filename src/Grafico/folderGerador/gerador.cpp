#include <cstdlib>
#include <ctime>
#include <iostream>

int main(int argc, char *argv[]) {

  if (argc < 2)
    return 0;

  int N = std::atoi(argv[1]);

  std::srand(std::time(nullptr));

  std::cout << N << "\n";

  for (int i = 0; i < N; i++) {
    int r = std::rand() % 4;
    if (r == 0)
      std::cout << 'R';
    else if (r == 1)
      std::cout << 'L';
    else if (r == 2)
      std::cout << 'U';
    else
      std::cout << 'D';
  }

  std::cout << "\n";
}
