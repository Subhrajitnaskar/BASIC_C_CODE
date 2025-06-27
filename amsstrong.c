#include<stdio.h>
#include<math.h>
void ams(int n);
int main(){
    int n;
    printf("Enter number");
    scanf("%d",&n);
    ams(n);
    return 0;
}

void ams(int n){
    int temp,num=0,count=0,r=0, power;
   temp = n;
   
   while(n != 0){
        count = count+1;
        n = n/10;
    }
     
      n=temp;
    while(n != 0){
        r = n%10;
        power= pow(r,count);
        num = num+power;
        n = n/10;
        
    }  
   printf ("%d",num);
    if(num == temp)
    printf("It is amstrong");
   
else
    printf("It is not amstrong");

}