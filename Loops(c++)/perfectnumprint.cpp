#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    int sum=0;
    cout<<"Enter the number list : "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum=sum+j;
            }
        }
    }
        if(sum==n)
        {
            cout<<"Perfect numbers : "<<i<<endl;
        }
        else
        {
            cout<<"Not perfect numbers"<<endl;
        }
    }
