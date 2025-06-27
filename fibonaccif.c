#include<stdio.h>
void fibbo(int n);
int main(){
    int n;
    printf("Enter value of n : ");
    scanf("%d",&n);
    fibbo(n);
    return 0;
}

void fibbo(int n){
    int a,b,c;
    a = 0;
    b = 1;
    for(int i=2; i<=n; i++){
        c = a+b;
        a = b;
        b = c;
        printf("%d",c);
}
    }
    