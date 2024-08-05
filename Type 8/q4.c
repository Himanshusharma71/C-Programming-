#include <stdio.h>

int main() {
    int number, sum = 0, remain;

    
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number != 0) {
        remain = number % 10; 
        sum += remain;        
        number /= 10;            
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
