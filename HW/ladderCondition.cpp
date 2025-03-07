//find largest value

#include <iostream>
using namespace std;

int main()
{

    int a,b,c;

    cout <<"enter 1st number";
    cin>>a;
    cout<<"enter 2nd number";
    cin>>b;
    cout<<"enter 3rd number";
    cin>>c;
    if(a>b && a>c)
    {
        cout<<a<<" is largest"<<"\n";


    }
    else if(b>c && b>a)
    {
        cout<<b<<" is largest"<<"\n";

    }
    else if(c>a && c>b)
    {
        cout<<c<<" is largest"<<"\n";
    }
    else if(a==b && b==c)
    {
        cout<<"numbers are equal"<<"\n";
    }
    else if(a==b && a!=c)
    {
        cout<<a<<"\n";
    }
    else if(b==c && b!=a)
    {
        cout<<b<<"\n";
    }
    else 
    {
        cout<<c<<" is largest"<<"\n";
    }

   
}
/* 1,1,2 ;;; */


