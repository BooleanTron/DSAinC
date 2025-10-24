#include <stdio.h>

int main(void){
    int num;
    printf("enter your number;\t");
    scanf("%i", &num);
    int flag = 0;
    for (int i = 2; i < num/2; i++){
        if(num % i == 0){
            flag = 1;
            break;
        }
    }

    if (flag == 1){
        printf("the number is not prime\n");
    }
    else {
        printf("the number is not a prime\n");
    }
    return 0;
}
