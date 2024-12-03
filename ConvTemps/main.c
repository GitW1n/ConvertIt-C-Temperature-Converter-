#include <stdio.h>
#include <stdint.h>

int main() {
    float temperature;
    char type;

    printf("Enter temperature value: ");
    if (scanf("%f", &temperature) != 1) {
        printf("Invalid temperature input!\n");
        return 1;
    }

    printf("Enter type (F for Fahrenheit, K for Kelvin, R for Rankine): ");
    if (scanf(" %c", &type) != 1) {
        printf("Invalid type input!\n");
        return 1;
    }

    

    return 0;
}
