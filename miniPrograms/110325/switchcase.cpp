//Transfer Statement
//use on menu / MCQ based problems and programming

#include<iostream> 
using namespace std;
int main ()
{
int a,b, c;
cout<<"enter 2 different numbers\n" ; 
cin >>a>>b;
cout<<"\n select 1 for add, 2 for multiply, 3 for divide , 4 for substract" <<endl; 
cin>>c;

switch (c)
{
case 1:
{
cout<<a+b<<endl;
break;
}
case2:
{
cout<<a*b<<endl; 
break;
}
case 3:
{
cout<<a/b<<endl;
 break;
}
case 4:
{
cout<<a-b<<endl;
break;
}
default:
{
cout<<"invalid choice"<<endl;
break;
}
}
}