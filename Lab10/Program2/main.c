#include <stdio.h>
#include <string.h>

/*
 * Union members share the exact same memory location.
 * Only ONE member should be stored and read at a time.
 */
union Data {
    int intVal;
    float floatVal;
    char strVal[20];
};

/*
 * Lab 10 - Program 2 (Q.20)
 * Demonstrate the use of a union and display its members safely,
 * one member at a time.
 */
int main(void) {
    union Data data;

    printf("Size of union Data: %zu bytes\n\n", sizeof(data));

    /* 1. Store and display integer member */
    data.intVal = 42;
    printf("After assigning data.intVal = 42:\n");
    printf("  data.intVal   = %d\n\n", data.intVal);

    /* 2. Store and display float member (overwrites previous shared memory) */
    data.floatVal = 98.6f;
    printf("After assigning data.floatVal = 98.6f:\n");
    printf("  data.floatVal = %.2f\n\n", data.floatVal);

    /* 3. Store and display string member (overwrites previous shared memory) */
    strcpy(data.strVal, "C Programming");
    printf("After assigning data.strVal = \"C Programming\":\n");
    printf("  data.strVal   = %s\n", data.strVal);

    return 0;
}
