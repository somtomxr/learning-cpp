#include<iostream>
using namespace std;
int main(){
    int p,r,t;
    cout<<"Principal Amount=";
    cin>>p;
    cout<<"rate=";
    cin>>r;
    cout<<"time=";
    cin>>t;
    cout<<"Simple Interest="<<p*r*t/100<<"\n";
    cout<<"Total Amount after "<<t<<" years = "<<p*r*t/100+p<<"\n";



}