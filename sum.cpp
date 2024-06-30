#include<iostream>
using namespace std;
int total(int n)
{
    int sum = 0;
    int i;
    if(n>0)
    {
        for(i=1;i<=n;i++)
        {
            sum+=i;
        }
    }
    else if(n<0)
    {
        for(i=n;i<1;i++)
        {
            sum+=i;
        }
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter the number of terms:";
    cin>>n;
    cout<<"The Sum of "<<n<<" number(s) is: "<<total(n)<<endl;
    return 0;
}
