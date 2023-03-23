#include <stdio.h>

#define ARRAY_SIZE 10

int main()
{
    int array[ARRAY_SIZE];
    int *ptr = array;

    // Fill the array with user input
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("Ingrese un entero ");
        scanf("%d", &array[i]);
    }

    // Print each element of the array multiplied by 2 using a pointer
    printf("Elementos del array multiplicados por 2:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", *(ptr + i) * 2);
    }
    printf("\n");

    return 0;
}
