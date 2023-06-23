#include <stdio.h>

int main() {
//creating variables
char c;

//input
printf("Enter a Character ");
scanf("%c",&c);

//switch
switch (c) {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("%c is a vowel letter",c);
        break;
    default:
        printf("%c is not a vowel letter",c);

   }
}
