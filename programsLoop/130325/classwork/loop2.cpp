#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter to number to get table = ";
    cin>>a;
    b=1;
    if (a>0)
    {
     do
    {
       cout<<a*b<<"\n";
       b++;

    } while (b<=10);
}
else{
    cout<<"invalid\n";
}

}
