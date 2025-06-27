#include<stdio.h>
int main(){
    int n,rem,reverse;
    printf("Enter value of n : ");
    scanf("%d",&n);
    rem = 0;
    reverse = 0;
    while(n != 0){
        rem = n%10;
        reverse = reverse*10+rem;
        n = n/10;
    }

    printf("The number is : %d", reverse);

    return 0;
}