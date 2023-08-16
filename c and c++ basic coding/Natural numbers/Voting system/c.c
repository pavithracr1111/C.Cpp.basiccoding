/*Problem Statement
You need to use a program to accept the age of the user and based on the age print if they are eligible for voting or not.
 Anyone who is 18 or older can vote and others can’t. If the user is eligible to vote, Print “Eligible” else print “Ineligible”  */

 
//C (Method 1)
#include <stdio.h>

int main() {
    
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    
    if (age >= 18)
        printf("Vote");
    else
        printf("Can not Vote");

       return 0;
}
/* C(Method 2 : Ternary Operator)
#include <stdio.h>

int main() {
    
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    
    age >= 18 ? printf("Vote") : printf("Can not Vote");
    
    return 0;
}
*/