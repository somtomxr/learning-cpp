#include<iostream>
using namespace std;

int a=900; //global variable

int main() {
  
    int a=100;//local variable
    cout<<::a; //scope resolution operator
    cout<<"\n"<<a<<"\n";

}
