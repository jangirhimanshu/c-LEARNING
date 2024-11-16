#include <stdio.h>

int main() {
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of char: %zu byte\n", sizeof(char));
    printf("Size of float: %zu bytes\n", sizeof(float));
    return 0;

    /* SIZE OF INT,CHAR AND FLOAT
int: 4 bytes(32bits)
float: 4 bytes(32bits)
char: 1 bytes(8bits)*/
}