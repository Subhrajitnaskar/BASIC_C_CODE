#include<stdio.h>
int gcd(int a, int b);
int main(){
    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    int g = gcd(a,b);
    printf("the value is :%d",g);
    return 0;
}

int gcd(int a,int b){
    while(a != b){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;

}