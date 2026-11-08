#include <stdio.h>    // Header file for printf

int main()            // Entry point of the program
{
    int a = 5 ;   // Initialize variable a with value 5
    int b = 10 ;  // Initialize variable b with value 10    
    int sum ;
    printf("The value of a is : %d \n ",a);   // showing message to user
    printf("The value of b is : %d \n ",b);   //showing message to user
    sum = a + b ;   // Calculate the sum of a and b
    printf("The sum of %d and %d is :   %d\n", a, b, sum);    // Print the result
}