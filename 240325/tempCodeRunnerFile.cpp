#include<iostream>
using namespace std;
int main(){
    int num=2,div,range=20;
    cout << "Prime Number between 2 to "<<range << endl;
    
    while (num<=range)
    {
        div = 2;
        while ( div <= num )
        {
            if (num % div == 0 && div < num)
            {
                break;    
            }
            else if (num == div)
            {
                cout << num << "\t";   
            }
            div++; 
        }
        num++;    
    }    
    cout << endl;
}