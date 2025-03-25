#include<iostream>
 using namespace std;
int main (){
    int n=3, k=0, f=0;
    while (n<=20)
    {
        k=n-1;
        while (k>1)
        {
            if(n%k==0)
            {
                f=1 ;
                break;
            }
            k--:
        }
        if(f==0)
        {
            cout<<n<<"\t";
        }
        f=0;
        n++;
    }
}