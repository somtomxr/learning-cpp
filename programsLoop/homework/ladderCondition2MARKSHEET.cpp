//find largest value

#include <iostream>
using namespace std;

int main()
{

    float p,c,m,per;

    cout <<"Physics score = ";
    cin>>p;
    cout<<"Chemistry score = ";
    cin>>c;
    cout<<"Math score = ";
    cin>>m;
    
    
     per=(p+c+m)/3;  
      

     if (p>100 || c>100 || m>100 || p<0 || c<0 || m<0)
     {
      cout<<"Invalid Marks";
     }
     

     else if (p<35 && c>=35 && m>=35)
     {
        cout<<"suply in physics"<<"/n";
     }
     else if (p>=35 && c<35 && m>=35)
     {
        cout<<"suply in chemistry"<<"/n";
     }
     else if (p>=35 && c>=35 && m<35)
     {
        cout<<"supplimentry in math "<<"/n";
     }
      else if ((p<35 && c<35) || (c<35 && m<35) || (m<35 && p<35))
     {
        cout<<"Fail"<<"\n";
     }
      else if (per>=60)
     {
        cout<<"Pass\n1st Divison"<<"\n";
        cout<<"Total precentage = "<<per<<"%\n";
     }
      else if (per<60 && per>=50)
     {
        cout<<"Pass\n2nd Divison"<<"\n";
        cout<<"Total precentage = "<<per<<"%\n";
     }
      else 
     {
        cout<<"3rd Divison"<<"\n";
        cout<<"Total precentage = "<<per<<"%\n";
     }
   
   
}
/* 1,1,2 ;;; ..*/


