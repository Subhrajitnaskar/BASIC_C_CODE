#include<stdio.h>
int main(){
    int n,sum;
    sum = 0;
    printf("Enter value : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            
             sum = sum + 1;
             printf("%d", sum);
        }
        printf("\n");
    }
    return 0;
}