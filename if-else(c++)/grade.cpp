#include<iostream>
using namespace std;
int main()
{
    int grade;
    cout<<"Enter the grade: "<<endl;
    cin>>grade;
    if(grade>100)
    {
        cout<<"Out of range not possible to grading "<<endl;
    }
    else if(grade>=90 && grade<=100)
    {
        cout<<"A+ -> Best grade"<<endl;

    }
    else if(grade>=85)
    {
        cout<<"A- -> Good grade"<<endl;
    }
    else if(grade>=80)
    {
        cout<<"B+ -> Average grade"<<endl;
    }
    else if(grade>=76)
    {
        cout<<"B -> Below Average grade "<<endl;
    }
    else if(grade>=65)
    {
        cout<<"B- -> Poor grade "<<endl;
    }
    else if(grade>=55)
    {
        cout<<"C- ->Tene tune pass korse "<<endl;
    }
    else if(grade>=50)
    {
        cout<<"D+ -> Near to fail "<<endl;
    }
    else
    {
        cout<<" Fail->  work hard to pass "<<endl;
    }
    return 0;
}