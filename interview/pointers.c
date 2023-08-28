/* #include<stdio.h>
int main()
{
    int x=5;
    int* ptr;
    ptr = &x;
    


    printf("%p\n",ptr);     //add
    printf("%p\n",*ptr);    // hexadecimal value of 5
    printf("%p\n",x);       // value
    printf("%p\n",&x);      //add
    printf("%p\n",&ptr);    //add



}*/
#include<stdio.h>
int main()
{
    int x=5;
    int* ptr;
    ptr = &x;
    printf("%d\n",*ptr);  
}
    
