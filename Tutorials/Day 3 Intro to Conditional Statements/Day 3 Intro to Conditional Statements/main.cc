// Copyright [2016] <Krzysztof Czelusniak>

#include <iostream>

int main() {
  int n;
  std::cin >> n;

  if (!(n % 2) && (n > 20 || n > 2 && n < 5)) {
    std::cout << "Not ";
  }

  std::cout << "Weird";
}
