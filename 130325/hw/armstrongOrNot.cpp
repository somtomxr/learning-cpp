//to find out the given three digit number is armstrong number or not. 153 = (1^3)+(5^3)+(3^3)

#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e;
    cout<<"Enter a 3 Digit Number = ";
    cin>>a;

    b=a/100;
    c=a%100/10;
    d=a%100%10;


    if (a==(b*b*b)+(c*c*c)+(d*d*d))
    {
       cout<<"This number is Armstrong Number\n";

    }
    else
    {
        cout<<"Not an Armstrong Number\n";
    }
    
}