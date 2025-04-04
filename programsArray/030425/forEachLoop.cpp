#include<iostream>
using namespace std;
int main(){
    int a[5]={4,6,9};
    int b[5];
    for(auto x:a)
    {
        cout<<x<<" ";
    }
    cout<< endl<<"Enter values for Array\n";
   
    for(auto &x:b)
    {
        cin>>x;
    }
    for(auto x:b)
    {
        cout<<x<<" ";
    }
    
    cout<< endl;
}