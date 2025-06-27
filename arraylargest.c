#include<stdio.h>
int main(){
    int n,max;
    printf("Enter number of n : ");
    scanf("%d",&n);
    int a[n];
    printf("enter number of elements : ");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    max = a[0];
    for(int i=1; i<n; i++){
        if(max<a[i]){
           max = a[i];
        }
    }
    printf("The biggest elements is : %d",max);
    return 0;
}