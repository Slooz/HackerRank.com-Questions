// Copyright [2016] <Krzysztof Czelusniak>

#include <iostream>

int SolveMeFirst(int num1, int num2) {
  int sum = num1 + num2;
  return sum;
}

int main() {
  int num1, num2;
  std::cin >> num1 >> num2;

  int sum = SolveMeFirst(num1, num2);
  std::cout << sum;
}
