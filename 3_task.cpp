#include <iostream>
using namespace std;

int main() {
    int rows;
    cout<<"Enter the number of rows";
    cin>>rows;
    cout<<"using for loop"<<endl;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout<<i<<" ";
        }
        cout << endl;
    }
    cout<<"Using while loop"<<endl;
    int i=1;
    while (i<=rows)
    {
        int j=1;
        while (j<=i)
        {
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
}
   