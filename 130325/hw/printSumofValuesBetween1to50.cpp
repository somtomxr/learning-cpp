//print the sum of values between 1 to 50. 1+2+...+50=?

#include<iostream>
using namespace std;
int main(){
    int a,b;
    b=0;
    a=1;
    do
    {
        b=b+a;

        a++;
        
    } while (a<=50);
    cout<<b<<endl;
}
