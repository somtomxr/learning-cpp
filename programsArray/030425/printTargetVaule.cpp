#include<iostream>
using namespace std;
int main(){
    int tar;
    int arr[5];
   
    for(auto &x:arr)
    {
        cin>>x;
    }
    int s=sizeof(arr)/sizeof(arr[0]);

    cout<<"Enter Target Value";

    cin>>tar;
    int p=0;
    for(int i=0 ; i<s ; i++)
    {
       if (tar==arr[i])
       {p=1;
        cout<<"yes";
        break;
       } 
       
       
       
    }
    if (p==0)
    {
       cout<<"no";
    }
    
    
    cout<< endl;
}