#include<iostream>
using namespace std;


int main() {
  
   int a=10; //normal variable
   int &b=a; //referennce variable,,, where & is use as address operator.
   cout<<"a="<<a<<"\n"; //display value of a.
   cout<<"b="<<b<<"\n";

   cout<<"adress of a="<<&a<<"\n"; //& display address of a
   cout<<"adress of b="<<&b<<"\n";

   b=90;
   cout<<"adress of a="<<&a<<"\n"; //& display address of a
   cout<<"adress of b="<<&b<<"\n";


}
