#include<iostream>
using namespace std;
int main()
{
    int numbers_of_week= 3;
    int days_in_week= 7;
    for(int week=1;week<=numbers_of_week;week++)
    {
        cout<<"week no="<<week<<endl;
        for (int day=1;day<=days_in_week;day++)
        {
            cout<<"\tday no "<<day<<endl;
        }
        cout<<endl;
        
    }
    cout<<"using while loop"<<endl;

    int week=1;
    while (week<=numbers_of_week)
    {
        cout<<"week no"<<week<<endl;
        int day=1;
        while (day<=days_in_week)
        {
            cout<<"\tday no"<<day<<endl;
            day++;
        }
        cout<<endl;
        week++;
        
    }
    
}