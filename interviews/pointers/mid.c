#include<stdio.h>
int *findMid(int a[],int n)         // pointer fun name
{
    return &a[n/2];             // 5/2=2.5 ~ 2 (0,1,2 th value)
}
int main() 
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int *mid=findMid(a,n);  // to recieve address it must be pointer
    printf("%d",*mid);
}