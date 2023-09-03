#include<stdio.h>
int factorial (int n);
int main()
{
    int n,fact;
    printf("Enter the number : \n");    
    scanf("%d",&n);

    fact=factorial(n);
    printf("Factorial of %d is:%d ",n,fact);
    return 0;
}
int factorial (int n)
{
    if(n==1)        // base condition    // Fact(1) = 1
    return  1;
    else
    return  n*factorial(n-1);       // recursive call        // Fact(n)= n * (n-1);
}
