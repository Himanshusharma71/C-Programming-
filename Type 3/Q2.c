#include <stdio.h>
 
int main(void)
{
    int a, b, c;
    printf("Enter three numbers: \na: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    printf("Largest of three numbers is %d", a > b ? (a > c ? a : c) : (b > c ? b : c));
    return 0;
}