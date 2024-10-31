#include <iostream>
using namespace std;

int main() {
    int rows = 7;
    //using for loop
    cout<<"using for loop"<<endl;
    for (int i = 1; i <= rows;i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }


    //using while loop
    cout<<"using while loop"<<endl;
    int i=1;
    while (i<=rows)
    {
        int j=1;
        while (j<=i)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;

        i++;
        
    }
    
}
