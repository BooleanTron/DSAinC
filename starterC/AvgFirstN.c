# include <stdio.h>
# include <conio.h>

int main(void){
    int n, i = 0, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    do {
        sum += i;
        i++;
    }while(i <= n);
    float avg = (float)sum/n;
    printf("The average of the first %d numbers is %.2f", n, avg);
    return 0;
}
