#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Table of ";
    cin>>a;
    b=1;
    table:
    
    
    cout<<a<<"x"<<b<<a*b<<endl;
    b++;
    if (b<=10)
    {
    goto table;
    }

}


    
