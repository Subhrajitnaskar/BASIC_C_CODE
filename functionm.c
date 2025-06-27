#include<stdio.h>
void maximum(int a,int b);
void minimum(int a,int b);

int main(){
    int a,b;
    printf("Enter nomber a : ");
    scanf("%d",&a);
    printf("Enter nomber b : ");
    scanf("%d",&b);
    maximum(a,b);
    minimum(a,b);
}

void maximum(int a,int b){
    if(a<b){
        printf("Mximum number is : %d\n",b);
        
    }
    else if(a>b){
        printf("maximum number is : %d\n",a);
    }
    else{
        printf("The number is same\n");
    }
    
}
void minimum(int a,int b){
    if(a>b){
        printf("minimum nomber is : %d\n",b);
    }
    else if(a<b){
        printf("minimum number is : %d\n",a);
    }
    else("The number is same\n");
    
}