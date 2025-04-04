#include<iostream>
using namespace std;
int main(){

    
    int n=4;
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

    int k=arr[0];
            
    for(int z=n; z>1; z--) 
    {
        for(int i = 0, j = 1, k ; i < n; i++, j++)
        {
            if (arr[i]>arr[j] )
            {
                k=arr[i];
                arr[i]=arr[j];
                arr[j]=k;  
            }         
        }
    }    
    cout<<"Ascending Array Sequence = ";
    for(auto x:arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}