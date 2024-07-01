#include<iostream>
using namespace std;
void findgreater(int n1, int n2, int n3)
{
    if(n1>n2 && n1>n3)
    {
        cout<<n1<<" is the Greatest Number!"<<endl;
    }
    else if(n2>n1 && n2>n3)
    {
        cout<<n2<<" is the Greatest Number!"<<endl;
    }
    else
    {
        cout<<n3<<" is the Greatest Number!"<<endl;
    }
}
int main()
{
    int n1 ,n2, n3;
    cout<<"Enter 3 positive integers: ";
    cin>>n1>>n2>>n3;
    findgreater(n1,n2,n3);
    return 0;
}
