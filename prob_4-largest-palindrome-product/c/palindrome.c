#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

void reverseString(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    char temp;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

bool is_palindrome(int num) {
    int len = snprintf(NULL, 0, "%d", num);

    // Allocate one more char for the null-terminator "\0"
    char* str = malloc(len + 1);
    snprintf(str, len + 1, "%d", num);

    char* revstr = malloc(len + 1);
    strcpy(revstr, str);
    reverseString(revstr);
    
    int match = strcmp(revstr, str);

    free(str);
    free(revstr);

    if (match == 0) {
        return true;
    } else {
        return false;
    }
}

int main () {
    int a = 999;
    int b = 999;
    int max = 0;

    for (int a = 999; a >= 100; a--) {
        for (int b = 999; b >= 100; b--) {
            int product = a * b;
            //printf("The product of %d and %d is %d\n", a, b, product);

            if ((is_palindrome(product)) && (product > max)) {
                max = product;
                printf("The product %d of %d and %d is a palindrome\n", product, a, b);
            }
        }
    }

    printf("Max palindrome is %d\n", max);

    return 0;
}