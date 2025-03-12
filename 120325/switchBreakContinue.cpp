#include<iostream>
using namespace std;
int main()
{
    int a;
    up:
    a++;
    if(a!=5)
    {
        a=1;

        cout<<a;
        
        
    }
    goto up;
  

}
