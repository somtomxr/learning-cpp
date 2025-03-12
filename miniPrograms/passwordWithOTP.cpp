#include <iostream>
using namespace std;
int main(){

    int pwd;
    cout<<"eneter password = ";
    cin>>pwd;
    if (pwd>=1000 && pwd<=10000) {
      if (pwd==2025) {
            cout<<"wlecome !"<<"\n";
            cout<<"Enter OTP = ";
            cin>>pwd;
        if(pwd==1000) {
            cout<<"Correect OTP, Access Granted!\n";

        }else
             {
             cout<<"Wrong OTP";
             }
      }else
         
         {
         cout<<"Wrong pass"<<"/n";
         }
    }else
    {
        cout<<"ivalid password range"<<"\n";


     }
 }
