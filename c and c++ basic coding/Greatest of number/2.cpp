#include<iostream>
using namespace std;
int main() {
    int x,y;
    cout << "Enter two numbers: " << endl;
    cin >> x >> y;

    if(x<y)
        cout << " Y is greater " << endl;
    else if(x>y) 
        cout << " X is greater " << endl;
    else
        cout << " X = Y " << endl ;
        return 0;
}