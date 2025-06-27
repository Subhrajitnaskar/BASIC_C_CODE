#include<stdio.h>
int main(){
    int n;
    int count = 0;
    printf("Enter nomber : ");
    scanf("%d",&n);
    for(int i=2; i<n/2; i++){
        if(n%i == 0){
          count = count + 1;
            break;
        }
    }
        if(count == 0){
            printf("This is prime");
        }
        else{
            printf("This is not prime");
        }
    

    return 0;

}