#include <iostream>
using namespace std;

int main() {
  
  int x=11;
  int y=5;
  int z=3;
  int k;
  k=z--;
  y=++k;
  x=--y;
  z=k--;
  cout<<x<<"\n"<<y<<"\n"<<z<<"\n"<<k;
    return 0;
}