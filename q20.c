#include <stdio.h>

int main(){
    char c;
    printf("Enter any character: ");
    scanf("%c", &c);

    (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')? printf("is_vowel"): printf("is_consonant"); 

    return 0;
}