#include<stdio.h>
int add(int num1, int num2);
int sub(int num1,int num2);
int main(){
    int num1,num2;
    printf("enter number : ");
    scanf("%d %d",&num1,&num2);
    int a = add(num1,num2);
    int b = sub(num1,num2);
    printf("the value is : %d,%d", a,b);
    return 0;
}
int add(int num1, int num2){
   int  a = num1+num2;
    return a;
}

int sub(int num1, int num2){
   int  b = num1-num2;
    return b;
}