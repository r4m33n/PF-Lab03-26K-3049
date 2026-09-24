#include <stdio.h>

int main(){
    float temp;
    float pressure;

    printf("Enter the temperature of the machine: ");
    scanf("%f", &temp);

    printf("Enter the pressure of the machine: ");
    scanf("%f", &pressure);

    if (temp > 100 || pressure > 250){
        printf("Shut Down");
    }
    else if (temp > 85 && temp < 100 && pressure > 200 && pressure < 250){
        printf ("Warning Mode");
    }
    else{
        printf ("Machine is working");
    }

}