#include <stdio.h>
#include <stdint.h>

int main() {
    float temperature;
    char type;

    printf("Enter temperature value: ");
    if (scanf("%f", &temperature) != 1) {
        printf("Invalid temperature input!\n");
        return 1;// Return with error
    }

    printf("Enter type (F for Fahrenheit, K for Kelvin, R for Rankine): ");
    if (scanf(" %c", &type) != 1) {
        printf("Invalid type input!\n");
        return 1;
    }

    if (type == 'F' || type == 'f') {
        printf("Temperature in Fahrenheit: %.2f\n", (temperature * 9.0 / 5.0) + 32);
    if (type == 'F' || type == 'f') {
        printf("Temperature in Fahrenheit: %.2f\n", (temperature * 9.0 / 5.0) + 32);
    } else if (type == 'K' || type == 'k') {
        printf("Temperature in Kelvin: %.2f\n", temperature + 273.15);
    } else if (type == 'R' || type == 'r') {
        printf("Temperature in Rankine: %.2f\n", (temperature + 273.15) * 9.0 / 5.0);
    } else {
        printf("Invalid type!!!\n");
    }

    return 0;
}
