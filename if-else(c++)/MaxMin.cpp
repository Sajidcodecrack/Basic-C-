#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the value of a :"<<endl;
    cin>>a;
    cout<<"Enter the value of b :"<<endl;
    cin>>b;
    cout<<"Enter the value of c :"<<endl;
    cin>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"A is the maximum : "<<a<<endl;
        }
          else
          {
            cout<<"C is the maximum : "<<c<<endl;
          }
    }
    else
    {
        if(b>c)
        {
            cout<<"B is the maximum :"<<b<<endl;

        }
        else
        {
            cout<<"C is the maximum : "<<c<<endl;
        }
    }
  return 0;

}