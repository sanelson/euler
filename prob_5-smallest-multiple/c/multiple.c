#include <stdio.h>
#include <stdbool.h>

/*
    # Problem Statement
    2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
    What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

bool evenly_divisible(int num) {
    for (int i = 1; i <= 20; i++) {
        if ( num % i != 0 ) {
            return false;
        }
    }

    return true;
}

void main (void) {
    int num = 20;

    while (! evenly_divisible(num)) {
        num++;
    }

    printf("%d is evenly divisible by 1 to 20\n", num);
}