#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a Number to check if it is Prime = ";
    cin>>a;
    b=1;
    do
    {
        
     if (a%b==0)
    {
        cout<<"its not a  prime number";
    }
    

    


    } while (a%b!=0 ||b==a-1 && b<a );

    
   
   
   
    
}