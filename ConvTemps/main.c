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

    if (type == 'F' || type == 'f') {
        printf("Temperature in Fahrenheit: %.2f\n", (temperature * 9.0 / 5.0) + 32);
    

    return 0;
}
