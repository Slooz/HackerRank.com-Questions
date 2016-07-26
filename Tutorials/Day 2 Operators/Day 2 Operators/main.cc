// Copyright [2016] <Krzysztof Czelusniak>

#include <cmath>
#include <iostream>

int main() {
  double meal_cost;
  int tip_percent, tax_percent;
  std::cin >> meal_cost >> tip_percent >> tax_percent;

  double tip = tip_percent * 0.01 * meal_cost;
  double tax = tax_percent * 0.01 * meal_cost;
  int total_cost = static_cast<int>(std::round(meal_cost + tip + tax));

  std::cout << "The total meal cost is " << std::round(total_cost)
            << (total_cost == 1 ? " dollar." : " dollars.");
}
