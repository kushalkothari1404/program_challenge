#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a positive integer: ";
    cin>>n;
    cout<<"The Factors of "<<n<<" are: "<<endl;
    for(int i=1;i<=n;++i)
    {
        if(n%i == 0)
        {
            cout<<i<<endl;
        }
    }
}
