#include <stdio.h>
#include <math.h>

int main() {
    float num;
    int floorValue, ceilingValue;

    printf("Enter a real number: ");
    scanf("%f", &num);

    floorValue = floor(num);
    ceilingValue = ceil(num);

    printf("Floor value: %d\n", floorValue);
    printf("Ceiling value: %d\n", ceilingValue);

    return 0;
}


