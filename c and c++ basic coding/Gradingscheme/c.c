/* Grading a Student (Explaining && and)

Write a Program to check the grade of the students based on marks -

If marks <50 then Grade is F
if marks >=50 <60 then Grade is D
if marks >=60 <70 then Grade is C
if marks >=70 <80 then Grade is B
if marks >=80 <90 then Grade is A
if marks >=90 <=100 then Grade is A+
If marks are not in the above range then print “Invalid” */


#include<stdio.h>
int main() 
{
    int marks;
    printf("Enter the marks: ");
    scanf("%d",&marks);

    if(marks<50)
        printf("F");
    else if (marks>=50 && marks <60)
        printf("D");
        else if (marks>=60 && marks <70)
        printf("C");
        else if (marks>=70 && marks <80)
        printf("B");
        else if (marks>=80 && marks <90)
        printf("A");
        else if (marks>=90 && marks <100)
        printf("A+");
    else
    printf("Invalid");
}