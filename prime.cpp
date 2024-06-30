#include<iostream>
using namespace std;
string check(int num)
{
    string s1 = "The given number is not a Prime Number";
    string s2 = "The given number is a Prime Number";
    int count = 0;
    for(int i=1;i<=num;i++)
    {
        if(num%i == 0)
        {
            count++;
        }
    }
    if(count == 2)
    {
        return s2;
    }
    else
    {
        return s1;
    }
}
int main()
{
    int num;
    cout<<"Enter Number to be checked:";
    cin>>num;
    cout<<check(num);
    return 0;
}
