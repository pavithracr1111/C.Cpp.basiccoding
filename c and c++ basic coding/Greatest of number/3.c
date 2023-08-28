#include<stdio.h>
int main ()
{
    int first, second, third;
    printf("Enter first number:");
    scanf("%d",&first);
    printf("Enter second number:");
    scanf("%d",&second);
    printf("Enter third number:");
    scanf("%d",&third);


    //comparing first with other numbers
    if ((first >= second) && (first >= third))
        printf(" %d is the greatest ", first);
        
    //comparing Second with other numbers
    else if ((second >= first) && (second >= third))
         printf(" %d is the greatest ", second);
    else
         printf(" %d is the greatest ", third);    return 0;
}