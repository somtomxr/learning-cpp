#include <iostream>
using namespace std;

int main()  {

    int password;
    cout<<"enter a 4 digit password"<<"\n";
    cin>>password;

    if (password>=1000 && password<=9999)
    cout<<"password valid"<<"\n";


    else
    cout<<"password invalid"<<"\n";


}
