#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

/*
 * Lab 4 - Program 1 (Q.7)
 * Find the length of a string and copy one string into another
 * using standard string functions (strlen and strcpy).
 */
int main(void) {
    char source[MAX_LEN];
    char destination[MAX_LEN];
    size_t length;

    printf("Enter a string: ");
    if (fgets(source, sizeof(source), stdin) == NULL) {
        printf("Error reading input string.\n");
        return 1;
    }

    /* Remove trailing newline character added by fgets, if present */
    source[strcspn(source, "\n")] = '\0';

    /* Find string length using strlen() */
    length = strlen(source);

    /* Copy source string into destination using strcpy() */
    strcpy(destination, source);

    printf("\nSource string      : %s\n", source);
    printf("Length of string   : %zu\n", length);
    printf("Copied string      : %s\n", destination);

    return 0;
}
