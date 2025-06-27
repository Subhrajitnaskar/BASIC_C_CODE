#include<stdio.h>
void palin(int n);
int main(){
    int n,t;
    t = n;
    printf("Enter value of n : ");
    scanf("%d",&n);
    palin(n);
    return 0;
}

void palin(int n){
    int reverse,rem,t;
    t = n;
    reverse = 0;
    rem = 0;
    while(n != 0){
        rem = n%10;
        reverse = reverse*10 + rem;
        n = n/10;
    }
    printf("%d",reverse);
    if(t==reverse){
        printf("This is pallindromic");
    }
    else{
        printf("Not pallindromic");
    }

}