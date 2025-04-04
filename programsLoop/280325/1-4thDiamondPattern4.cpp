#include<iostream>
using namespace std;
int main()
{
    for(char row='a'; row<='d'; row++)
    {   
        for (int space='c'; space>=row; space--)
        {
            cout<<" ";
        }
        for (char column='a'; column<=row; column++)
        {
            cout<<column;
            
        }
        cout<<endl;   
    }
    return 0;
}