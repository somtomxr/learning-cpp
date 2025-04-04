//find total combination with minimum notes of 5,10,20,50,100,500
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the Amount = ";
    cin>>a;
    cout<<"Breakdown of Amount with Minimum Notes\n";
  
    
      cout<<a/500 <<" * 500 rs\n" ;  
      cout<<a%500/100 <<" * 100 rs\n";
      cout<<a%500%100/50 <<" * 50 rs\n";
      cout<<a%500%100%50/20 <<" * 20 rs\n";
      cout<<a%500%100%50%20/10 <<" * 10 rs\n";
      cout<<a%500%100%50%20%10/5 <<" * 5 rs\n";
      
    }