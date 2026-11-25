#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

/*
 * Lab 4 - Program 2 (Q.8)
 * Concatenate two strings and compare two strings using
 * standard string library functions (strcat and strcmp).
 */
int main(void) {
    char str1[MAX_LEN];
    char str2[MAX_LEN];
    char combined[MAX_LEN * 2];
    int cmpResult;

    printf("Enter first string: ");
    if (fgets(str1, sizeof(str1), stdin) == NULL) {
        printf("Error reading first string.\n");
        return 1;
    }
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    if (fgets(str2, sizeof(str2), stdin) == NULL) {
        printf("Error reading second string.\n");
        return 1;
    }
    str2[strcspn(str2, "\n")] = '\0';

    /* Compare the two original strings using strcmp() */
    cmpResult = strcmp(str1, str2);
    printf("\nComparison Result:\n");
    if (cmpResult == 0) {
        printf("Both strings are equal.\n");
    } else if (cmpResult < 0) {
        printf("\"%s\" is lexicographically smaller than \"%s\".\n", str1, str2);
    } else {
        printf("\"%s\" is lexicographically greater than \"%s\".\n", str1, str2);
    }

    /* Concatenate str2 onto a copy of str1 using strcat() */
    if (strlen(str1) + strlen(str2) < sizeof(combined)) {
        strcpy(combined, str1);
        strcat(combined, str2);
        printf("\nConcatenated String: %s\n", combined);
    } else {
        printf("\nError: Combined string exceeds buffer capacity.\n");
        return 1;
    }

    return 0;
}
