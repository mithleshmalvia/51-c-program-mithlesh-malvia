#include <stdio.h>

/*
 * Lab 11 - Program 2 (Set 2 - Q.2 / Experiment 22)
 * Print the ASCII values of the characters 'H' and 'f' using character variables.
 */
int main(void) {
    char upperChar = 'H';
    char lowerChar = 'f';

    printf("Character '%c' has ASCII value: %d\n", upperChar, (int)upperChar);
    printf("Character '%c' has ASCII value: %d\n", lowerChar, (int)lowerChar);

    return 0;
}
