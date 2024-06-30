#include<iostream>
using namespace std;
float avg(int num)
{
    float average;
    float sum = 0;
    if(num>0)
    {
        for(int i=0 ; i<=num; i++)
        {
            sum+=i;
        }
        average = sum/num;
        return average;
    }
    else if(num<0)
    {
        for(int i=num; i<1; i++)
        {
            sum+=i;
        }
        average = sum/num;
        return average;
    }
}
int main()
{
    float sum,average;
    int num;
    cout<<"Enter a Number: ";
    cin>>num;
    cout<<"The average is: "<<avg(num);
    return 0;
}
