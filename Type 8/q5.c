#include <stdio.h>

int main() {
    int number, pro=1, remain;

    
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number != 0) {
        remain = number % 10; 
        pro =pro * remain;        
        number /= 10;            
    }

    printf("pro of digits: %d\n", pro);

    return 0;
}
