#include<stdio.h>
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num>0)
         printf("positive");
    else if(num<0)
         printf("negative");
    else 
         printf("zero");
}



int main()
{
    int num;
    printf("Insert a number: ");
    scanf("%d", &num);
    
    //Condition to check if the number is negative or positive or zero
    if (num >= 0)
    {
        if (num == 0)
            printf(" 0");
        else
            printf(" Positive");
    }
    else
        printf(" negative ");
    
    return 0;
}



#include<stdio.h>
int main()
{
    int num;
    printf("Insert a number: ");
    scanf("%d", &num);
    
    //Condition to check if the 0, positive or negative
    
    if(num == 0)
        printf("Zero");
    else
        (num > 0) ? printf("Positive"): printf("Negative");
    
    return 0;
}