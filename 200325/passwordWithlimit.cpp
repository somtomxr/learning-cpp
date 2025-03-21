#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter Password = ";
    b=1;
    while(b<=3)

    {
        cin>>a;
        if(a==1234)
        {
            cout<<"password valid"<<endl<<"Correct Pass"<<endl;

            break;
        }
       
        else
        {
            cout<<"pass invalid"<<endl;
        }
        b++;

    }
     if(b==4)
        {
            cout<<"try another Day"<<endl;
        }
}