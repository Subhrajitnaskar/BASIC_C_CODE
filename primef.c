#include<stdio.h>
void prime(int n);
int main(){
    int n;
    printf("Enter value : ");
    scanf("%d",&n);
    prime(n);
    return 0;
}

void prime(int n){
    int count;
    count = 0;
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
    
}