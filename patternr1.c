#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for (int j=i; j<=n; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}