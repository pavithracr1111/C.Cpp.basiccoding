/*  For Tables 

        function is table(n)

*/ 





#include<iostream>
#include<math.h>
using namespace std;
void table(int x)
{
    int i;
    for(i=1;i<=10;i++)
    {
        cout << x << " * " << i << " = " << x * i    <<endl;        //imp
    }
}
int main() 
{
    int n;
    cout << "Enter the number : " <<endl;
    cin >> n ;
    table(n);
    return 0;
}