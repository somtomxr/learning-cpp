//the given numbers is palindrome or not. example- 121, 2442,

#include<iostream>
using namespace std;

int main(){
    int lastDigit,tempNum,rvrNum=0,orgNum;
    cout << "enter number: ";
    cin >> orgNum;

    tempNum = orgNum;  //save original number

//reverse the number
    do
    {
        lastDigit=tempNum%10; 
        tempNum=tempNum/10;
        rvrNum=rvrNum*10+lastDigit; 
    } while (tempNum>0);


//checking palindrome
    if (orgNum==rvrNum)
    {
        cout << "Original Number = "<<orgNum<<" & Reversed Number="<<rvrNum<<endl;
        cout << "Thus, number is palindrome\n";
    }
    else{
        cout << "Original Number = "<<orgNum<<" & Reversed Number="<<rvrNum<<endl;
        cout << "Thus, not a palindrome\n";
    }
    
    return 0;
    
    



}
