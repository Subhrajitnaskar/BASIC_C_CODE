#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int p=0; p<=i; p++){
            printf(" ");
        }
        for (int j=i; j<=i; j++){
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}