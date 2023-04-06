#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0}; // to store frequency of characters
    
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    
    // check length of both strings
    if (strlen(str1) != strlen(str2)) {
        printf("Strings are not anagrams.\n");
        return 0;
    }
    
    // update frequency of characters in first string
    for (int i = 0; str1[i] != '\0'; i++) {
        freq[(int)str1[i]]++;
    }
    
    // check frequency of characters in second string
    for (int i = 0; str2[i] != '\0'; i++) {
        freq[(int)str2[i]]--;
    }
    
    // check if all frequencies are zero
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Strings are not anagrams.\n");
            return 0;
        }
    }
    
    // if all frequencies are zero, strings are anagrams
    printf("Strings are anagrams.\n");
    return 0;
}

