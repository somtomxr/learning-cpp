#include <iostream>
using namespace std;

int main() {
  
  int x=112;
 int y=59;
 int z=52;
  int k;
   k=x++;
    x=--k;
    z=--y;
    y=x++;
    x=z++;
    cout << x << "\n" << y << "\n" << z << "\n" << k << "\n";

    return 0;
}