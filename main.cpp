#include <iostream>
using namespace std;
int main()
{
    int number;
    int mode=1;
    cout << "== check number is even or odd ==" << endl;
    while (mode == 1)
    {
        cout << "Enter a number: ";
        cin >> number;
    
        if (number % 2 == 0)
            cout << number << " is even." << endl;
        else
            cout << number << " is odd." << endl;
        // -----
        cout << " enter :-- \n1 : once again  \n0 : exit  \n ";
        cin>>mode;
    }
    cout<<"exit success !!! \n ";
    return 0;
}
