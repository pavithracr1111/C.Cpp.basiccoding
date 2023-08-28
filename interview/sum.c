#include<stdio.h>
int sum(int x, int y);
int main() 
{
    int a , b ,add;
    printf("enter value of a ");
    scanf("%d",&a) ;
    printf("enter value of b ");
    scanf("%d",&b);

    add=sum(a,b);
    printf("value of %d and %d is %d",a,b,add);

}
int sum(int x,int y)
{
    int result = x + y;
    return result;
}