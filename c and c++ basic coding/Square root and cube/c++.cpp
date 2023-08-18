#include<iostream>
using namespace std;
#include<math.h>
double SquareRoot(int x)
{
    double sq;
    sq=sqrt(x);
    return sq;
}
double CubeRoot(int x)
{
    double cr;
    cr=cbrt(x);
    return cr;
}

int main()
{
    cout << SquareRoot(52)<<endl;
    cout << CubeRoot(8)<<endl;
    return 0;
}