#include<iostream>
using namespace std;
int main()
{
    int fact=1;
    int i,n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial value : "<<fact<<endl;
    return 0;
}