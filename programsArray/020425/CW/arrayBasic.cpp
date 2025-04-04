#include<iostream>
using namespace std;
int main(){
    //int arr[8]={1,4,13}; // stored rest values are 0
     int arr[8]; // garbage value
    int s=sizeof(arr)/sizeof(arr[0]);
    arr[5]=20;
    arr[1]=11;
    cout<<"lenght of array = "<<s<<endl;
    for (int i = 0; i < s; i++)
    {
        cout<<arr[i]<<"\t";  //display the values of array
    }
    cout<<endl;
    return 0;
    
}