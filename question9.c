#include <stdio.h>

int main(){
    int people;
    float weight;

    printf ("Enter the number of people: ");
    scanf ("%d", &people);

    printf ("Enter the combined weight: ");
    scanf ("%f", &weight);

    if (people > 10){
        printf ("Entry denied due to exceeded people limit");
    }
    else if (weight > 1000){
        printf ("Entry denied due to exceeded weight limit");
    }
    else{
        printf ("Can operate normally!");
    }

    return 0;
}