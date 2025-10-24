# include <stdio.h>
# include <conio.h>
# define  pi 3.14
int main(void){
    float dia;
    clrscr();
    printf("enter the diameter of the circle:\t");
    scanf("%f", &dia);
    double area = pi * (dia/2) * (dia/2);
    printf("the area of the given circle is :\t%.2lf", area);
    return 0;
}
