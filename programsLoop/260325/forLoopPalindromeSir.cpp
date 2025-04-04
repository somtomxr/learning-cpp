//to do with for loop

#include<iostream>
using namespace std;

int main(){
    int tempNum,rvrNum=0,orgNum;
    cout << "enter number: ";
    cin >> orgNum;

    tempNum = orgNum;  //save original number

//reverse the number
while (orgNum>0)
    {
        rvrNum=rvrNum*10+orgNum%10;
        orgNum=orgNum/10;
       
    } 


//checking palindrome
    if (tempNum==rvrNum)
    {
        cout << "Original Number = "<<tempNum<<" & Reversed Number="<<rvrNum<<endl;
        cout << "Thus, number is palindrome\n";
    }
    else{
        cout << "Original Number = "<<tempNum<<" & Reversed Number="<<rvrNum<<endl;
        cout << "Thus, not a palindrome\n";
    }
    
    return 0;
    
    



}
// while(n>0){c=c+n%10; n=n/10;}