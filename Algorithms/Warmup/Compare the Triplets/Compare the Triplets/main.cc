// Copyright [2016] <Krzysztof Czelusniak>

#include <iostream>

void ScoreComparison(int* scoreA, int* scoreB, int a, int b) {
  if (a > b) {
    ++*scoreA;
  } else if (a < b) {
    ++*scoreB;
  }
}

int main() {
  int a1, a2, a3, b1, b2, b3;
  std::cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

  int a = 0, b = 0;
  ScoreComparison(&a, &b, a1, b1);
  ScoreComparison(&a, &b, a2, b2);
  ScoreComparison(&a, &b, a3, b3);

  std::cout << a << ' ' << b;
}
