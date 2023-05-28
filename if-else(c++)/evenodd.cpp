#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the first number : "<<endl;
    cin>>a;
    cout<<"Enter the second number:"<<endl;
    cin>>b;
    if(a>b)
    {
        if(a%2==0)
        {
            cout<<"Even number"<<endl;
        }
        else
        {
            cout<<"Odd number "<<endl;
        }
    }
    else
    {
        if(b%2==0)
        {
            cout<<"Even number "<<endl;
        }
        else
          {
            cout<<"Odd number "<<endl;
          }
    }
    return 0;
}