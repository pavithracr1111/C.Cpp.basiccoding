#include<stdio.h>
int main() {
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);

    if(x<y)
        printf(" Y is greater ");
    else if(x>y) 
        printf(" X is greater ");
    else
        printf(" X = Y ");
        return 0;
}

/*

#include<stdio.h>
int main ()
{
    int num1, num2, largest;
    printf ("Insert two numbers: ");
    scanf ("%d %d", &num1, &num2);
 
    if(num1 == num2)
        printf("Both are Equal\n");
    else{
        largest = num1 > num2? num1 : num2;
        printf("%d is largest",largest);
    }

  return 0;
}

*/