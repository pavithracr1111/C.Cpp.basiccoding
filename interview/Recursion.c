#include<stdio.h>
int fact (int n)
{
    if(n==1)        // base condition    // Fact(1) = 1
    return  1;
    else
    return  n*fact(n-1);       // recursive call        // Fact(n)= n * (n-1);
}
int main()
{
    int n;
    printf("Enter the number : \n");    
    scanf("%d",&n);
    printf("Factorial of %d is: %d",n,fact(n));
    
}