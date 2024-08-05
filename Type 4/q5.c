#include <stdio.h>

int days_in_month(int month) {
    switch (month) {
        case 1:  
        case 3:  
        case 5:  
        case 7:  
        case 8:  
        case 10: 
        case 12: 
            return 31;
        case 4:  
        case 6:  
        case 9:  
        case 11: 
            return 30;
        default:
            printf("Invalid month number\n");
            return -1;
    }
}

int main() {
    int month1, month2;

    printf("Enter two month numbers: ");
    scanf("%d %d", &month1, &month2);

    int days1 = days_in_month(month1);
    int days2 = days_in_month(month2);

    if (days1!= -1) {
        printf("%d Days ", days1);
    }
    if (days2!= -1) {
        printf("%d Days\n", days2);
    }

    return 0;
}