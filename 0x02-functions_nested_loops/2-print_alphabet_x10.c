#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void) {
    char letter = 'a';
    int i, j;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 26; j++) {
            putchar(letter);
            letter++;
        }
        letter = 'a';
        putchar('\n');
    }
}

