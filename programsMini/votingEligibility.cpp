#include <iostream>

using namespace std;
int main(){
int a;
cout<< "enter age\n" ;
cin>>a;

int r;
// syntax: (condition) ?entruevalue: enfalsevalue
r= (a>=18)?1:0;
//cout<<r;
(a>= 18)?cout<<"u can vote": cout<<"u can not";
    return 0;

}           