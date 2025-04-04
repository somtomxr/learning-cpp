#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a Number to check if it is Prime = ";
    cin>>a;
    b=1;
    do
    {
     b++;   
     if (a%b==0 && b<a)
    {
        cout<<"its not a  prime number";
    }

     else if(a==b)
     {
        cout<<" its a prime number";
     }
    } while (a%b!=0 && b<a );
}