#include <stdio.h>

int main(){
    int choice;
    int min;
    int bill;

    bill = 0;

    printf ("Plan 1 (Rs. 500 for 1000 minutes),\nPlan 2 (Rs.800 for 2000 minutes),\nPlan 3 (Rs. 1200 for unlimited minutes),\nPlan 4 (custom plan billed at Rs.1/minute)\n");
    printf ("Which plan would you like? (Enter plan number): ");
    scanf ("%d", &choice);

    printf ("Enter minutes used: ");
    scanf ("%d", &min);

    switch (choice){
    case 1:
        if (min > 1000){
            bill = 500 + (min - 1000) * 2;
        }
        else{
            bill = 500;
        }
        break;
    case 2:
        if (min > 2000){
            bill = 800 + (min - 2000) * 2;
        }
        else{
            bill = 800;
        }
        break;
    case 3:
        bill = 1200;
        break;
    case 4:
        bill = min;
        break;
}

    printf ("Your bill is: %d ", bill);

    return 0;
}