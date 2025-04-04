#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a number to get Factors = ";
    cin>>a;
    cout<<"Factors of "<<a<<" are = ";
    b=0;

    do 
   
    {  b++;
       if (a%b==0)
    {
       cout<<b<<"\t";
    }

    

    }while(a/2>=b);



    cout<<a;
    cout<<endl;
    return 0;
}