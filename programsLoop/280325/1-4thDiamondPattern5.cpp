#include<iostream>
using namespace std;
int main()
{
    int output=1;
    for(int r=1; r<=4; r++)
    {   
        for (int s=3; s>=r; s--)
        {
            cout<<" ";
        }
        for (int c=1; c<=r; c++)
        {
            cout<<output;
            output++;
            
        }
        cout<<endl;   
    }
    return 0;
}