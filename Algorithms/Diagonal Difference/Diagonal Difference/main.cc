// Copyright [2016] <Krzysztof Czelusniak>

#include <iostream>
#include <numeric>
#include <vector>

std::vector<std::vector<int>> ReadMatrix(int matrix_size) {
  std::vector<std::vector<int>> matrix(matrix_size,
                                       std::vector<int>(matrix_size));
  for (int matrix_row_count = 0; matrix_row_count < matrix_size;
       ++matrix_row_count) {
    for (int matrix_column_count = 0; matrix_column_count < matrix_size;
         ++matrix_column_count) {
      std::cin >> matrix[matrix_row_count][matrix_column_count];
    }
  }
    return matrix;
}

int main() {
  int matrix_size;
  std::cin >> matrix_size;

  auto matrix = ReadMatrix(matrix_size);

  int primary_diagonal_sum = 0, secondary_diagonal_sum = 0;
  for (int matrix_count = 0; matrix_count < matrix_size; ++matrix_count) {
    primary_diagonal_sum += matrix[matrix_count][matrix_count];
    secondary_diagonal_sum
      += matrix[matrix_count][matrix_size - matrix_count - 1];
  }

  int difference = std::abs(primary_diagonal_sum - secondary_diagonal_sum);
  std::cout << difference;
}
