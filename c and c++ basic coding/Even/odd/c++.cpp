#include<iostream>
using namespace std;
int main() 
{
    int x;
    cout << "Enter the value of X " <<endl;
    cin >> x;
    if(x%2==0)
        cout << " Even ";
    else
        cout << "Odd " ;
}








#include<iostream>
using namespace std;

int main ()
{
    cout << "Enter a number:"; int number; cin >> number;

    
    //Checking if the number is divisible by 2
    number % 2 == 0? cout <<"Even":cout << "Odd";
    
    return 0;
}