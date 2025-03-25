#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a Number to check if it is Prime = ";
    cin>>a;
    b=2;
    while ( b<=a )
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
     b++;   
    } 
  
    
}