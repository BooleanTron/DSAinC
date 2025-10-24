// Question 2: Write a program to print the count of even numbers between 1 to 200. Also print their sum

#include <stdio.h>

int main(void){
    int sum = 0, count = 0;
    for (int i = 1; i <= 200; i++){
        if (i % 2 == 0){
            count++;
            sum += i;
        }
    }
    printf("Count of even numbers: %d\n", count);
    printf("Sum of even numbers: %d\n", sum);
}
