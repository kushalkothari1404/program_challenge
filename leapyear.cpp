#include<iostream>
using namespace std;
void leapyear(int year)
{
    if(year % 4 == 0)
    {
        if(year % 100 == 0)
        {
            if(year % 400 == 0)
            {
                cout<<year<<" is a Leap Year";
            }
            else
            {
                cout<<year<<" is not a Leap Year";
            }
        }
        else
        {
            cout<<year<<" is a Leap Year";
        }
    }
    else
    {
        cout<<year<<" is not a Leap Year";
    }
}
int main()
{
    int year;
    cout<<"Enter a year: ";
    cin>>year;
    leapyear(year);
    return 0;
}
