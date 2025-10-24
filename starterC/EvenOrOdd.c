# include <stdio.h>
# include <conio.h>

int main(void){
    int num;
    clrscr();
    printf("enter your number:\t");
    scanf("%i", &num);

    if(num % 2 == 0)
        printf("EVEN\n");
    else
        printf("ODD\n");

    return 0;
}
