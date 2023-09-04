#include<stdio.h>
int main()
{
    int i=10;
    int *p,*q;
    p=&i;
    p=q;
    printf("%d%d",*p,*q);
}

// same address , but q is not eaual to p