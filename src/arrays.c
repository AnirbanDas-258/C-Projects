#include <stdio.h>
void main() {
    int marks[3] = {56,78,89};
    int i;
    float avg;
    for (i = 0; i<3; i++) {
        avg = avg + marks[i];
    }
    printf("%f",avg);
}
