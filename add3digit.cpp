#include <iostream>
using namespace std;
int main() {
    cout<<"write 3 digit number\n";
    int a;
    cin>>a;
    cout<<"result="<<a/100+a%100/10+a%100%10;
     return 0;
}