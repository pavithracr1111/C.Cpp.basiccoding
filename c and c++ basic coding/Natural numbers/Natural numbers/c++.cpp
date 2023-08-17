/* C++ (For Loop)

#include <iostream>
using namespace std;

int main() 
{
    
    int num;
    cout << "Enter the number: "; 
    cin >> num;
    
    for(int i=1;i<=num;i++)
    {
         cout << i << " ";
    }
    
    return 0;

}


C++ (While Loop)
#include <iostream>
using namespace std;

int main() {
    
    int num;
    cout << "Enter the number: "; cin >> num;
    
    int i = 1;
    
    while(i<=num){
         cout << i << " ";
        i++;
    }
    
    return 0;

}
*/


//C++ (Do-While Loop)

#include <iostream>
using namespace std;

int main() {
    
    int num;
    cout << "Enter the number: ";
     cin >> num;
    
    int i = 1;
    
    do{
        cout << i << " ";
        i++;
    }while(i<=num);
    
    return 0;
}