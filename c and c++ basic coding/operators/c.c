#include<stdio.h>
#include<math.h>
int Add(int a, int b)
{
    int sum;
    sum=a+b;
    return sum;
}
int Sub(int x, int y)
{
    int sub;
    sub=x-y;
    return sub;
}
int Multiply(int x, int y)
{
    int multiply;
    multiply=x*y;
    return multiply;
}
int Division(int x, int y)
{
    int quotient;
    quotient=x/y;
    return quotient;
}
int Modulus(int x, int y)
{
    int rem;
    rem=x%y;
    return rem;
}
int Power(int x, int y)
{
    int power;
    power=pow(x,y);     //pow(x,y)
    return power;
}


int main() 
{
    int x,y;
    scanf("%d%d",&x,&y);
    printf("%d\n",Add(x,y));
    printf("%d\n",Sub(x,y));
    printf("%d\n",Multiply(x,y));
    printf("%d\n",Division(x,y));
    printf("%d\n",Modulus(x,y));
    printf("%d\n",Power(x,y));

    return 0;
}