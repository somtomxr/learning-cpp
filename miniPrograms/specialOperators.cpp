#include<iostream>
using namespace std;

int main() 

{
  //speacial operator
  
  int a=20;

  {
    int a=40;
    cout<<::outer_a<<"\n";
  }
}