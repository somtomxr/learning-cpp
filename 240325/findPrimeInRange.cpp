#include<iostream>
using namespace std;
int main(){
    int tmpRange=1, divVar, range=20;
    
    cout << "Prime number between 1 - "<< range << endl;
    // <<"1\t2\t";
    
    while (tmpRange<=range)
    {  
        divVar=2;
        while (divVar<=tmpRange)
        {
            if (tmpRange%divVar==0)
            {
                break;
            }
            else
            {
                cout<<tmpRange<<"\t";
                break;
            }
       
        divVar++;
        }
        tmpRange++;
    }
    
}