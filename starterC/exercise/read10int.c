// Question 1: Write a program to read 10 integers. Display these numbers by printing three numbers in a line separated by commas.

#include <stdio.h>

int main(){
    int num[10];
    for (int i = 0; i < 10; i++){
        printf("enter number:\t");
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 10; i++){
        if(i % 3 == 0 && i != 0){
            printf("\n");
        }
        printf("%d, ", num[i]);
    }
}
