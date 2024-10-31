#include<iostream>
using namespace std;
int main()
{
    for(int rows=1;rows<=5;rows++)
    {
        cout<<"row no "<<rows<<endl;
        for(int seats=1;seats<=10;seats++)
        {
            cout<<"\tRow no "<<rows<<" seat no: "<<seats<<endl;
        }
    }
    cout<<"Using while loop"<<endl;
    int rows=1;
    while (rows<=5)
    {
        cout<<"Row no"<<rows<<endl;
        int seats=1;
        while (seats<=10)
        {
            cout<<"\tRow no"<<rows<<"\tSeat no "<<seats<<endl;
            seats++;
        }
        cout<<endl;
        rows++;
        
    }
    
}