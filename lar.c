#include<stdio.h>
int main(){
    int n,s;
    printf("Enter number of n : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter number of array : ");
    for(int i = 0; i<n; i++){
        scanf("%d",&a[i]);
    }
    s = a[0];
    for(int i=0; i<n; i++){
        if(s<a[i]){
           s = a[i]; 
        }
    }
    printf("Largest number is %d",s);

}