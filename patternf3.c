#include<stdio.h>
void pattern(int n);
int main(){
    int n;
    printf("enter value : ");
    scanf("%d",&n);
    pattern(n);

    return 0;
}

void pattern(int n){
    for(int i=1; i<=n; i++){
        for(int f=1; f<=i; f++){
            printf("%d",f);
        }

        printf("\n");
    }
}