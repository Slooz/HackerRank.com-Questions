// Copyright [2016] <Krzysztof Czelusniak>

#include <iostream>
#include <list>
#include <vector>

std::vector<int> ReadIntegersIntoVector(int number_of_integers) {
  std::vector<int> integers(number_of_integers);
  for (int integer_count = 0; integer_count < number_of_integers;
    ++integer_count) {
    std::cin >> integers[integer_count];
  }
  return integers;
}

std::list<int> ReadIntegersIntoList(int num_integers) {
  std::list<int> integers;
  for (int integer_count = 0; integer_count < num_integers; ++integer_count) {
    int integer;
    std::cin >> integer;
    integers.push_back(integer);
  }
  return integers;
}

int main() {
  int array_size, num_circular_rotations, num_queries;
  std::cin >> array_size >> num_circular_rotations >> num_queries;

  std::list<int> array_list = ReadIntegersIntoList(array_size);
  for (int circular_rotation_count = 0;
       circular_rotation_count < num_circular_rotations;
       ++circular_rotation_count) {
    array_list.push_front(array_list.back());
    array_list.pop_back();
  }
  std::vector<int> array_vector(array_list.begin(), array_list.end());

  std::vector<int> queries = ReadIntegersIntoVector(num_queries);
  for (int query : queries) {
    std::cout << array_vector[query] << '\n';
  }
}
