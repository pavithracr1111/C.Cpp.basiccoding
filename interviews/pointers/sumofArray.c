// sum of array elements using pointers

#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5};
    int sum=0,*p;

    for(p=a;p<=a+4;p++)         //imp
    sum=sum+*p;

    printf("Sum=%d",sum);
}