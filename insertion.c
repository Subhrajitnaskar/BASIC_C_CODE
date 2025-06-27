#include<stdio.h>
int main(){
    int n,temp,j;
    printf("enter array size : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",a[i]);
    }
    for(int i=1; i<n; i++){
        temp = a[i];
        j = i-1;
        while(j>=0 && temp<=a[j]){
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = temp;
    }
    for(int i=0; i<n; i++){
        printf("%d",a[i]);
    }

   return 0;
}