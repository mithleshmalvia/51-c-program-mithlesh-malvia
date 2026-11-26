#include <ctype.h>
#include <stdio.h>

/*
 * Lab 16 - Program 1 (Set 2 - Q.11 / Experiment 31)
 * Check whether a given character is an alphabet or not using <ctype.h>.
 */
int main(void) {
    char ch;

    printf("Enter a character: ");
    if (scanf("%c", &ch) != 1) {
        printf("Error reading character input.\n");
        return 1;
    }

    /* Cast to unsigned char before passing to isalpha() as required by standard C */
    if (isalpha((unsigned char)ch)) {
        printf("'%c' is an alphabet.\n", ch);
    } else {
        printf("'%c' is not an alphabet.\n", ch);
    }

    return 0;
}
