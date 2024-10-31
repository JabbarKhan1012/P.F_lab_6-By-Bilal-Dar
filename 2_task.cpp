#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    cout<<"\n\n\n Using for loop"<<endl;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j<<" ";
        }
        cout << endl;
    }
    cout<<"\n\n using while loop "<<endl;
    int i=1;
    while (i<=rows)
    {
        int j=1;
        while (j<=i)
        {
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
    i++;
        
    }
    

    return 0;
}
