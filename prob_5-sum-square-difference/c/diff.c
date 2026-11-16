#include <stdio.h>
#include <math.h>

/*
 * The sum of the squares of the first ten natural numbers is,
 *
 *  1^2 + 2^2 + ... + 10^2 = 385
 * 
 * The square of the sum of the first ten natural numbers is,
 *
 *  (1 + 2 + ... + 10)^2 = 55^2 = 3025
 *
 * Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is
 * 3025 - 385 = 2640
 *
 * Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
 */


void main (void) {
  double sum_of_squares = 0;
  double square_of_sum = 0;
  int sum = 0;
  double diff = 0;

  for (int i = 1; i <= 100; i++) {
    sum_of_squares = sum_of_squares + pow(i,2);
    sum = sum + i;
  }

  square_of_sum = pow(sum,2);
  diff = square_of_sum - sum_of_squares;
  printf("Diff is %.0f\n", diff);
}
