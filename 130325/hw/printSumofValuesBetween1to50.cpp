//print the sum of values between 1 to 50. 1+2+...+50=?

#include<iostream>
using namespace std;
int main(){
    int a,b,endN;
    b=0;
    a=1;
    cout<<"Enter a Number ";
    cin>>endN;
    do
    {
        b=b+a;

        a++;
        
    } while (a<=endN);
    cout<<b<<endl;
    // l
}
