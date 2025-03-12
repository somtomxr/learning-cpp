#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a Number\n";
    cin>>a;
    decrement:
    cout<<a--<<endl;

   
    if(a>=10)
    {
       goto decrement; 

    }
}