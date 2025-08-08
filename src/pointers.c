#include <stdio.h>
//pointer variables are written with an asterisk before them. It stores addresses of other variables.
int main() {
    int a; int *b;//address of a
    //int* b; is also okay
    a = 5;
    b = &a;

    printf("The address of B: %d\n", b);
    printf("The value of B: %d\n", *b);

    int c = 12;
    *b = c; //dereferencing
    printf("The address of B: %d\n", b);
    printf("The value of B: %d\n", *b);
}