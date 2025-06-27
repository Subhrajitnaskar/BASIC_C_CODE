#include<stdio.h>
int fac(int n);
int main(){
    int n;
    printf("Enter value : ");
    scanf("%d",&n);

    int s = fac(n);
    printf("The value is : %d",s);

    return 0;
    
}

int fac(int n){
    int s = 1;
    for(int i=1; i<=n; i++){
        s = s*i;
    
    }
      return s;
}