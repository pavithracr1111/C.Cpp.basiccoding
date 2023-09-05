#include<stdio.h>
struct abc
{
    int x;
    int y;
    int z;

};
int main()
{
    struct abc a={.y=10,.x=20,.z=30};
    printf("%d%d%d",a.x,a.y,a.z);
}