#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100 // Maximum size of the string

int main()
{
    char str[MAX_SIZE];
    int i, j, len, max_freq, freq;
    char max_char;

    printf("Enter a string : ");
    gets(str);

    len = strlen(str);
    max_freq = 0;
    for(i=0; i<len; i++)
    {
        freq = 1;
        for(j=i+1; j<len; j++)
        {
            if(str[i] == str[j])
            {
                freq++;
            }
        }
        if(freq > max_freq)
        {
            max_freq = freq;
            max_char = str[i];
        }
    }

    printf("Max repeated character in the string = %c\n", max_char);
    printf("It occurs %d times\n", max_freq);

    return 0;
}

