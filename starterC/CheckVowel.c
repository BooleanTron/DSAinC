# include <stdio.h>
# include <conio.h>

int main(void){
    char ch;
    clrscr();
    printf("Enter your character:\t");
    scanf("%c", &ch);
    switch(ch){
        case 'A':
        case 'a':
            printf("VOWEL\n");
            break;
        case 'E':
        case 'e':
             printf("VOWEL\n");
             break;
        case 'I':
        case 'i':
             printf("VOWEL\n");
             break;
        case 'O':
        case 'o':
             printf("VOWEL\n");
             break;
        case 'U':
        case 'u':
             printf("VOWEL\n");
             break;

        default:
            printf("CONSONANT\n");
    }
    return 0;
}
