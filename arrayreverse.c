#include<stdio.h>
int main(){
    int n,temp;
    printf("Enter number : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter number of elements : ");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++){
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1]= temp;
    }
    printf("Reverse of elements is : ");
    for(int i=0; i<n; i++){
        printf("%d",a[i]);
    }
    printf("\n");
    return 0;
}