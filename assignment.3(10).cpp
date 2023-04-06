#include<stdio.h>
#include<string.h>

void reverseString(char*);

int main()
{
    char str[100];
    
    printf("Enter any String :: ");
    scanf("%s", str);
    
    printf("The Reverse of the String [%s] is :: ", str);
    reverseString(str);
    printf("%s", str);
    
    return 0;
}

void reverseString(char *str)
{
    char *start, *end;
    char temp;
    
    start = str;
    end = str + strlen(str) - 1;
    
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        
        start++;
        end--;
    }
}

