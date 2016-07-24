// Copyright [2016] <Krzysztof Czelusniak>

#include <iostream>
#include <limits>
#include <string>

int main() {
  int i = 4;
  double d = 4;
  std::string s = "HackerRank ";

  int inputI;
  double inputD;
  std::string inputS;
  std::cin >> inputI >> inputD;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  getline(std::cin, inputS);

  int sumI = i + inputI;
  double sumD = d + inputD;
  std::string concatenateS = s + inputS;
  std::cout.precision(1);
  std::cout << sumI << '\n' << std::fixed << sumD << '\n' << concatenateS;
}
