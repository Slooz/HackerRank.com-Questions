// Copyright [2016] <Krzysztof Czelusniak>

#include <iostream>
#include <string>

void PrintStaircase(int staircase_size) {
  for (int step_count = staircase_size; step_count > 0; --step_count) {
    std::cout << std::string(step_count - 1, ' ')
              << std::string(staircase_size - step_count + 1, '#');
    if (step_count > 1) {
      std::cout << '\n';
    }
  }
}

int main() {
  int staircase_size;
  std::cin >> staircase_size;

  PrintStaircase(staircase_size);
}
