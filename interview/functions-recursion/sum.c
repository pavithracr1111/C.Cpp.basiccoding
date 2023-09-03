#include<stdio.h>
int sum(int x,int y)
{
   
    return  x + y;
}
int main() 
{
    int a , b ,add;
    scanf("%d",&a);
    scanf("%d",&b);

    add=sum(a,b);
    printf("value of %d and %d is %d",a,b,add);

}
