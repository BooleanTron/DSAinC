# include <stdio.h>
# include <conio.h>

int main(void){
    float f_num;
    int i_num;
    clrscr();
    printf("enter your int:\t");
    scanf("%i", &i_num);
    f_num = (float)i_num;
    printf("the floating point variant of %i is = %f\n", i_num, f_num);
    return 0;
}
