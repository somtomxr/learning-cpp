#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter Array Length\n";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" values\n"; 
    for(auto &x:arr)
    {
        cin>>x;
    }
    cout<<"Original Array Sequence = ";
    for(auto x:arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"Reversed Array Sequence = ";
    for ( int i=--n; i >= 0 ; i--)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
    
    



}