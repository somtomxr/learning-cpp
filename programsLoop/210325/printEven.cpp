#include<iostream>
using namespace std;
int main(){
    int a, n;
    a=1;
    
    
    cout<<"Even numbers from 1 to ";
    cin>>n;
    do{
       if (a%2==0)
       {
        cout<<a<<", ";
       
       }

       a++;
       
    }
    while (a<=n);

    
}