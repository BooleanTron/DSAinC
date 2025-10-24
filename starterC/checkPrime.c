# include <stdio.h>
# include <conio.h>

int main(){
    int n, flag = 0;
    clrscr();
    printf("enter a number:\t");
    scanf("%i", &n);
    for(int i = 2; i < n/2; i++){
        if(n % i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("%i is a prime number", n);
    }else{
        printf("%i is not a prime number", n);
    }
    return 0;
}
