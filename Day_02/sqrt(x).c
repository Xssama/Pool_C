#include <stdio.h>
#include <math.h>

int sqrt_n(float n) {
    return floor(sqrt(n));
}

int main() {
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);
    printf("Square root of %f is %d", n, sqrt_n(n));
}