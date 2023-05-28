#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter the number list to find the perfect number: "<<endl;
    cin>>n;
    for(i=1;i<n;i++)
    {
      if(n%i==0)
      {
        sum=sum+i;
      }
    }
    if(sum==n)
    {
        cout<<"The number is a perfect number "<<endl;
    }
    else
    {
        cout<<"The number is not a perfect number "<<endl;
    }
    return 0;
}