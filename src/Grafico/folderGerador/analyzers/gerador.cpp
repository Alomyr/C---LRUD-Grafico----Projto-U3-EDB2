#include <cstdlib>
#include <iostream>

int main(int argc, char *argv[]) {

  if (argc < 2)
    return 0;

  int N = std::atoi(argv[1]);

  std::cout << N << "\n";

  // Caminho sem repetição garantida (zig-zag)
  for (int i = 0; i < N; i++) {
    if (i % 4 == 0)
      std::cout << 'R';
    else if (i % 4 == 1)
      std::cout << 'U';
    else if (i % 4 == 2)
      std::cout << 'L';
    else
      std::cout << 'D';
  }

  std::cout << "\n";
}
