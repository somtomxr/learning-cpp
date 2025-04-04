//print sum of all even number from 1 to n

#include<iostream>
using namespace std;
int main(){
    int i,n,sum;
    cout<<"find out sum of 1 to ";
    cin>>n;
    

for(i=0,sum=0; i<=n; i+=2)
{
    sum+=i;
} 
cout<<sum<<endl;   
}
