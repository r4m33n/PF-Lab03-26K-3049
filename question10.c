#include <stdio.h>

int main(){
    const int BASEF = 1000;
    int zone;
    float speed;
    int fine;

    printf ("(1 = School Zone,\n 2 = Highway,\n 3 = Residential Area)\n");
    printf ("Enter the zone: ");
    scanf ("%d", &zone);

    printf ("Enter the driver's speed: ");
    scanf ("%f", &speed);

    switch (zone){
        case 1:
            if (speed > 30){
                if ((speed-30) > 20){
                    fine = BASEF * 2;}
                else{
                    fine = BASEF;}
            }
            break;
        case 2:
            if (speed > 100){
                if ((speed-100) > 20){
                    fine = BASEF * 2;}
                else{
                    fine = BASEF;}
            }
            break;
        case 3:
            if (speed > 50){
                if ((speed-50) > 20){
                    fine = BASEF * 2;}
                else{
                    fine = BASEF;}
            }
            break;
    }

    printf ("You need to pay a fine of %d", fine);
    return 0;

}