#include<iostream>
using namespace std;
void check(int a,int b,int c)
{
    if(a^2==b^2+c^2 || b^2==a^2+c^2 || c^2==b^2+a^2)
    {
        cout<<"The entered numbers "<<a<<", "<<b<<", "<<c<<" are Pythagorean Triplet";
    }
    else
    {
        cout<<"The entered numbers "<<a<<" "<<b<<" "<<c<<" are not Pythagorean Triplet";
    }
}
int main()
{
    int a,b,c;
    cout<<"Enter any three numbers: ";
    cin>>a>>b>>c;
    check(a,b,c);
}
