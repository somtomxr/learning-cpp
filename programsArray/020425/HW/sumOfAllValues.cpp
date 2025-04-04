#include<iostream>
using namespace std;
int  main(){
    int arr[4];
    int s=sizeof (arr)/sizeof (arr[0]);
    int sum=0;
    

    cout<<"enter "<<s<<" values"<<endl;

    for ( int i = 0; i < s; i++)
    {
        cin>>arr[i];
    }



    for ( int i = 0; i < s; i++)
    {  
        sum=sum+arr[i];
    }
    cout<<"Sum of all value = "<<sum<<endl; 
}