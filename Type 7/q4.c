#include<stdio.h>

int main()

{
    int d,num;
    printf("Enter an integer: ");
    scanf("%d", &num);
   
    while (num > 0) 
    {
        d = num % 10; 
        num = num / 10;
        
        switch (d)
        {
         
        case 1:{
            printf("one");
            continue;
        }
        case 2:{
            printf("Two");
            continue;
        }
        case 3:{
            printf("three");
            continue;
        }
        case 4:{
            printf("four");
            continue;
        }
        case 5:{
            printf("five");
            continue;
        }
        case 6:{
            printf("six");
            continue;
        }
        case 7:{
            printf("seven");
            continue;
        }
        case 8:{
            printf("eight");
            continue;
        }
        case 9:{
            printf("nine");
            continue;
        }

        printf("\n");
    }
    
        }
    }

    
   
    





// #include <stdio.h>
// #include <string.h>

// // Arrays to hold words for single digits, two digits, tens multiples, and powers of ten.
// char *single_digits[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
// char *two_digits[] = { "", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
// char *tens_multiple[] = { "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
// char *power_of_ten[] = { "hundred", "thousand" };

// // Function to print the number in words.
// void convert_to_words(int num) {
//     if (num == 0) {
//         printf("zero\n");
//         return;
//     }

//     // To handle 1000-9999
//     if (num >= 1000) {
//         int thousand = num / 1000;
//         printf("%s thousand ", single_digits[thousand]);
//         num %= 1000;
//     }

//     // To handle 100-999
//     if (num >= 100) {
//         int hundred = num / 100;
//         printf("%s hundred ", single_digits[hundred]);
//         num %= 100;
//     }

//     // To handle 20-99
//     if (num >= 20) {
//         int ten = num / 10;
//         printf("%s ", tens_multiple[ten]);
//         num %= 10;
//     }

//     // To handle 10-19
//     if (num >= 10) {
//         printf("%s\n", two_digits[num % 10 + 1]);
//         return;
//     }

//     // To handle 0-9
//     if (num > 0) {
//         printf("%s\n", single_digits[num]);
//     }
// }

// int main() {
//     int num;

//     printf("Enter a number (0-9999): ");
//     scanf("%d", &num);

//     if (num < 0 || num > 9999) {
//         printf("Number out of range\n");
//     } else {
//         convert_to_words(num);
//     }

//     return 0;
// }
