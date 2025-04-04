#include<iostream>
using namespace std;
int main (){
int a=0;
 int b=1;
  int c;
cout<<a<<"\t"<<b<<"\t";
for (int i=1;i<=4;i++)
{
c=a+b;
a=b;
b=c;
cout<<c<<"\t";
}
}