#include <stdio.h>
#include <string.h>

int main() {
    char str[20] = "Programming is";
    int length;

    length = strlen(str);

    printf("Length of %s = %d\n", str, length);

    return 0;
}