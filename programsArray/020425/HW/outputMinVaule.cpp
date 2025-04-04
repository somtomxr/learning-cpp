#include<iostream>
using namespace std;
int  main(){
    int arr[4];
    int s=sizeof (arr)/sizeof (arr[0]);
    

    cout<<"enter "<<s<<" values"<<endl;

    for ( int i = 0; i < s; i++)
    {
        cin>>arr[i];
    }

    int minValue=arr[0];

    for ( int i = 0; i < s; i++)
    {  
        
        if (minValue>arr[i])
        {
            minValue=arr[i];
        }
    }
    cout<<"Minimum value = "<<minValue<<endl; 
}