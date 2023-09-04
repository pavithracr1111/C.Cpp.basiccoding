/*
        in call by reference -->  done with [ & ] swaping can done without temp
*/


#include<stdio.h>
int fun(int &a,int &b)
{
    a=20;
    b=10;
}
int main() {
    int x=10,y=20;
    fun(x,y);       //def
    printf("%d\n%d",x,y);
}
