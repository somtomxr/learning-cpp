 #include<iostream> 
using namespace std;
    int main () {
        
    
    int a=300;
    int b=900;
    int *pointer; //pointer variable 
    pointer=&b;// reference
    cout<<"address of a="<<&a<<"\n" ;
    cout<< *pointer<<"\n";// dereference
    }