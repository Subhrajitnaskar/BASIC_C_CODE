#include<stdio.h>
int main(){
    int phy,chem,math,bio,bangali,eng;
    printf("Enter number phy : ");
    scanf("%d\n ",&phy);
    printf("Enter number chem : ");
    scanf("%d\n ",&chem);
    printf("Enter number math : ");
    scanf("%d\n ",&math);
    printf("Enter number bio : ");
    scanf("%d\n ",&bio);
    printf("Enter number bengali : ");
    scanf("%d\n ",&bangali);
    printf("Enter number eng : ");
    scanf("%d\n ",&eng);
    float avg = phy+chem+math+bio+bangali+eng/6;
      if(avg<=100 && avg>=90){
        printf("grade A");
      }
        else if(avg<90 && avg>=80){
            printf("grade B");
        }
        else if(avg<80 && avg>=70){
            printf("grade C");
        }
        else if(avg<70 && avg>=60){
            printf("grade D");
        }
        else if(avg<60 && avg>=0){
            printf("fail");
        }
        else{
            printf("none aplicable");
        }
      

    
return 0;
    
}