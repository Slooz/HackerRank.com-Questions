// Copyright [2016] <Krzysztof Czelusniak>

#include <iostream>
#include <numeric>
#include <vector>

int SumIntegers(std::vector<int> integers) {
  int sum = std::accumulate(integers.begin(), integers.end(), 0);
  return sum;
}

std::vector<int> ReadIntegers(int number_of_integers) {
  std::vector<int> integers(number_of_integers);
  for (int integer_count = 0; integer_count < number_of_integers;
       ++integer_count) {
    std::cin >> integers[integer_count];
  }
  return integers;
}

int main() {
  int number_of_integers;
  std::cin >> number_of_integers;

  std::vector<int> integers = ReadIntegers(number_of_integers);

  int sum = SumIntegers(integers);

  std::cout << sum;
}
