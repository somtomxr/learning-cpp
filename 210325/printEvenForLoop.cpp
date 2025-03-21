#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"find out even from 1 to ";
    cin>>n;
    for (i = 0; i<=n; i++)
    {
        if (i%2==0)
        {
            cout<<i<<"\t";
        }
        
    }
    cout<<endl;
    return 0;
}