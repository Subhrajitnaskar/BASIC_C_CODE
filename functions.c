#include<stdio.h>
#include<math.h>
int power(int a,int b);
int main(){
    int a,b,p;
    printf("Enter nomber a : ");
    scanf("%d",&a);
    printf("Enter nomber b : ");
    scanf("%d",&b);
    p = power(a,b);
    printf("The value is : %d",p);

    return 0;
}

int power(int a,int b){
  int p = pow(a,b);
    return p;
}