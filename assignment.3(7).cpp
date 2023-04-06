#include <stdio.h>

int main() {
    char str[100];
    int i, sum = 0;
    
    printf("Enter the string : ");
    gets(str);
    
    for(i = 0; str[i] != '\0'; i++) {
        sum += str[i];
    }
    
    printf("Sum of all characters : %d", sum);
    
    return 0;
}

