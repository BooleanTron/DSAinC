# include <stdio.h>
# include <conio.h>

int main(void){
    int a, b, i, sum = 0;
    clrscr();
    printf("enter starting point:\t");
    scanf("%i", &a);
    printf("enter ending point:\t");
    scanf("%i", &b);

    i = a;
    while(i <= b){
        sum += i;
        i++;
    }

    printf("SUM = \t%i",sum);

    return 0;
}
