//Write a program to print factorial of n number using recursive function
#include<stdio.h>
long int multiplyNumbers(int n);
int main()
{
    int n;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    printf("Factorial of %d=%ld\n",n,multiplyNumbers(n));
    return 0;
}
long int multiplyNumbers(int n){
    if(n>=1)
    return n*multiplyNumbers(n-1);
    else
    return 1;
}