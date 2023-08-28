#include<iostream>
#include<math.h>
#include <iomanip>          //     used for set precision
using namespace std;
int main() 
{
    int num,expo,temp;
    double result;

    cout << "Enter the number : " << endl;
    cin >>num ;

    cout << "Enter the expo : " << endl;
    cin>>expo ;

    temp = pow(num,expo);
    result = pow(num,expo);

    cout << temp << endl;
    cout << result << endl;
     cout << fixed <<setprecision(1)<< endl;
}