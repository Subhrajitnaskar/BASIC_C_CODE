#include<stdio.h>

int main(){
    int num;       // Declare an integer variable 'num'
    int *p;        // Declare a pointer 'p' which will point to an integer
    int **pp;      // Declare a pointer 'pp' which will point to a pointer to an integer

    // Prompt the user to enter a number and store the value in 'num'
    printf("Enter the number of num : ");
    scanf("%d", &num); // Take input from the user and store it in 'num'

    p = &num;    // Assign the address of 'num' to pointer 'p'
    pp = &p;     // Assign the address of pointer 'p' to pointer 'pp'

    // Dereferencing 'p' to print the value of 'num' using pointer 'p'
    printf("The value of integer using p : %d\n", *p);
    
    // Dereferencing 'pp' twice to print the value of 'num' using pointer to pointer 'pp'
    printf("The value of integer using pp : %d\n", **pp);

    return 0;    // Exit the program successfully
}