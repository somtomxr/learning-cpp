#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a Number to check if it is Prime = ";
    cin>>a;
    
    for (b=2; b<=a ; b++)
    {
     if (a%b==0 && b<a)
    {
        cout<<"its not a  prime number";
        break;
    }

     else if(a==b)
     {
        cout<<" its a prime number";
     }
       
    }  
}