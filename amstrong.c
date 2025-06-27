
#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp,num=0,count=0,r=0;
    printf("Enter number : ");
    scanf("%d",&n);
   temp = n;
   printf("debug1\n");
   while(n != 0){
        count = count+1;
        n = n/10;
    }
     printf("count :%d\n", count);
      n=temp;
    while(n > 0){
        r = n%10;
        printf("r%d\n", r);
        int power= pow(r,count);
        printf("power :%d\n", power);
        num = num+power;
        printf("num :%d\n", num);
        n = n/10;
        printf("n :%d\n", n); 
    }  
printf("error");

    if(num == temp)
    printf("It is amstrong");
   
else
    printf("It is not amstrong");

    return 0;

}