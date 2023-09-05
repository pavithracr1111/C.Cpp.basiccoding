#include<stdio.h>
struct ptr
{
    int x;
    int y;

};
int main()
{
    struct ptr a={0,1};
    struct ptr *p=&a;
    printf("%d%d",p->x,p->y);
} 
