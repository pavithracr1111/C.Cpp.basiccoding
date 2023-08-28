/* 
When base/Exp are integer

#include<stdio.h>
#include<math.h>
int main()
{
  //To initialize variables
  int number, expo,temp;
  double result ;


  //To take user input
  printf("Enter a base number: ");
  scanf("%d", &number);
 

  //To display Exponent
  printf("Enter an exponent: ");
  scanf("%d", &expo);
 

  //use while loop when power is not equal to zero
  temp = pow(number,expo);
  result = pow(number,expo);
 
  printf("%d power %d is %d\n",number, expo, temp);
  printf("%d power %d is %lf\n",number, expo, result);
  printf("%d power %d is %.1lf\n",number, expo, result);        // precision 1
 
  return 0;
}
 */




/* 

When base/Exp are decimals

#include<stdio.h>
#include<math.h>
int main()
{
  //To initialize variables
  double number, expo,temp;
  double result ;


  //To take user input
  printf("Enter a base number: ");
  scanf("%lf", &number);
 

  //To display Exponent
  printf("Enter an exponent: ");
  scanf("%lf", &expo);
 

  //use while loop when power is not equal to zero
  temp = pow(number,expo);
  result = pow(number,expo);

 
  printf("%lf power %lf is %lf\n",number, expo, temp);
  printf("%lf power %lf is %lf\n",number, expo, result);
  printf("%lf power %lf is %.1lf\n",number, expo, result);
 
  return 0;
}
*/


/*without using inbuilt functions*/

#include<stdio.h>
#include<math.h>
int main()
{
    double base;
    int exp;
    
    printf("Enter base: ");
    scanf("%lf",&base);
 
    printf("Enter Exponent: ");
    scanf("%d",&exp);

    double result = 1;
    
    // can use this loop too
    // for(int i = 0; i < exp; ++i)
    //     result *= base;
       
    // can use this loop too
    // for(int i = 1; i <= exp; ++i)
    //         result *= base;
    
    // can use this loop too
    // for (; exp!= 0; --exp)
    //     result = result * base;
        
    while (exp != 0)
    {
        result = result * base;
        --exp;
    }
 
    //printing result
    printf("answer = %lf", result);

}