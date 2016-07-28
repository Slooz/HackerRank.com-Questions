// Copyright [2016] <Krzysztof Czelusniak>

#include "person.h"

#include <iostream>
#include <string>

Person::Person(int initial_age) {
  if (initial_age < 0) {
    age = 0;
    std::cout << "Age is not valid, setting age to 0.\n";
    return;
  }
  age = initial_age;
}

void Person::YearPasses() {
  ++age;
}

void Person::AmIOld() {
  std::string message;
  if (age < 13) {
    message = "You are young.\n";
  } else if (age < 18) {
    message = "You are a teenager.\n";
  } else {
    message = "You are old.\n";
  }
  std::cout << message;
}
