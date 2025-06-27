#include<stdio.h>
int sum(int num1,int num2);
int sub(int num1,int num2);
int multi(int num1,int num2);
int divi(int num1, int num2);

int main(){
    int num1,num2;
    printf("Enter value : ");
    scanf("%d %d",&num1,&num2);
    int a = sum(num1,num2);
    int b = sub(num1,num2);
    int c = multi(num1,num2);
    int d = divi(num1,num2);
    printf("The value is : %d\n, %d\n, %d\n, %d\n",a,b,c,d);
    return 0;

}
int sum(int num1,int num2){
   int a = num1+num2;
    return a;
}
int sub(int num1,int num2){
   int b = num1-num2;
    return b;
}
int multi(int num1,int num2){
  int  c = num1*num2;
    return c;
}
int divi(int num1, int num2){
   int d = num1/num2;
    return d;
}