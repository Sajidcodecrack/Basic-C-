#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter the number list : "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        cout<<"Printed  : "<<i<<":"<<sum<<endl;
    }
    cout<<"Final summation : " <<sum<<endl;
}