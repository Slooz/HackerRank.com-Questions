// Copyright [2016] <Krzysztof Czelusniak>

#include <iostream>
#include <vector>

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

  int positive_count = 0, negative_count = 0, zero_count = 0;
  for (int integer : integers) {
    if (integer > 0) {
      ++positive_count;
    } else if (integer < 0) {
      ++negative_count;
    } else {
      ++zero_count;
    }
  }

  double fraction_positive
    = static_cast<double>(positive_count) / number_of_integers;
  double fraction_negative
    = static_cast<double>(negative_count) / number_of_integers;
  double fraction_zero = static_cast<double>(zero_count) / number_of_integers;
  std::cout << std::fixed << fraction_positive << '\n'
    << fraction_negative << '\n' << fraction_zero;
}
