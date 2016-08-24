// Copyright [2016] <Krzysztof Czelusniak>

#include <iostream>

int main() {
  int n;
  std::cin >> n;

  for (int count = 1; count <= 10; ++count) {
    std::cout << n << " x " << count << " = " << n * count << '\n';
  }
}
