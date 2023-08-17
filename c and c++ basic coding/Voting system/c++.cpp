/* 
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<< " Enter your Age: "<< endl;
    cin >> age;

    if(age>=18)
    cout << " vote " <<endl;
    else
    cout << " not "  <<endl;
    return 0;
}
*/

#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<< " Enter your Age: "<< endl;
    cin >> age;

    age>=18 ? cout << " vote " <<endl : cout << " not "  <<endl;        // condition ? true : false ; 
    
    
    
    return 0;
}


