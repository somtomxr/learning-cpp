#include <iostream>
using namespace std;
int main() {
 int a,b,c;
 cout<<"enter first numbers\n";
 cin>>a;
 cout<<"enter second number\n";
 cin>>b;
 c=(a-b);

 //(c)?cout<<c:d;
// (c >= 0)?cout<<c:cout<<d;
 (c>0)?cout<<c:cout<<-c;

    return 0;
}