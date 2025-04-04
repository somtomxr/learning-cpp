#include<iostream>
using namespace std;
int main(){
    int a, n, sum;
    a=2;
    sum=0;
    
    
    cin>>n;
    do{
        sum=sum+a;
        a++;
    }
    while (a<=n && a%2==0);
    cout<<sum<<endl;
    
}