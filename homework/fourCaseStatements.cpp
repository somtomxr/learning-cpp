#include<iostream>
using namespace std;
int main(){

    int a,b;
    cout<<"enter a number = ";
    cin>>a;
    cout<<"Press '1' to Find Even/Odd\n"<<"Press '2' to find if it is Leap Year\n"<<"Press '3' to Generate square\n"<<"Press '4' to Generate cube\n";
    cin>>b;

    switch(b)
    {
        case 1:
        { 
            if(a%2==0)
            {
                cout<<"even";
            }
            else
            {
                cout<<"odd";
            }
            break;
        }
        case 2:
        {
            if(a%4==0 && a%100!=0 || a%400==0)
            {
                cout<<"It's a Leap Year";
            }
            else
            {
                cout<<"Not a Leap Year";
            }
            break;

        }
        case 3:
        {
            cout<<a*a<<" is Square for "<<a<<endl;

            break;
        }
        case 4:
        {
            cout<<a*a*a<<" is Cube for "<<a<<endl;

            break;
 
        }


    }

}