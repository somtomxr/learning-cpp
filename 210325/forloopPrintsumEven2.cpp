//print sum of all even number from 1 to n
//Method 2

#include<iostream>
using namespace std;
int main(){
    int i,n,sum;
    cout<<"find out sum of 1 to ";
    cin>>n;
    

for(i=0,sum=0; i<=n; i++)
{if (i%2==0)
{
    sum+=i;
}

   
} 
cout<<sum<<endl;   
}
