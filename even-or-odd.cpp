#include<iostream>
using namespace std;
int check(int num)
{
    if(num%2 == 0)
    {
        cout<<"The given number "<<num<<" is Even"<<endl;
    }
    else
    {
        cout<<"The given number "<<num<<" is Odd"<<endl;
    }
    return 0;
}
int main()
{
    int num;
    cout<<"Enter the Number to be Checked:";
    cin>>num;
    check(num);
    return 0;
}
