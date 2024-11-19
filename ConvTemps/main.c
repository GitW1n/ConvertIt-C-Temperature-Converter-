#include <stdio.h>
#include <stdint.h>

int main() {
    float temperature;
    char type;

 
    scanf("%f", &temperature);
    
 
    scanf(" %c", &type);


    if (type == 'F' || type == 'f') {
        printf("%.2f\n", (temperature * 9.0 / 5.0) + 32);
    } else if ( type == 'K' || 'k') {
        printf("%.2f\n", temperature + 273.15 );
    } else if ( type == "R" || "r")
    else {
        printf("Invalid type!!!\n");
    }

    return 0;
}
