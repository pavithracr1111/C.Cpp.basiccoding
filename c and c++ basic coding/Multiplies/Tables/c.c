#include<stdio.h>
#include<math.h>

void table(int x)
{
    int i;
    for(i=1;i<=10;i++)
    {
        
        printf("%d   *   %d  =   %d\n",x,i ,(x*i));       //important
    }
}
int main() 
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    table(n);
    return 0;
}