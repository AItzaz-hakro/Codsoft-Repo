#include<iostream>
#include<iomanip>
#include<conio.h>
#include<cstdlib>
using namespace std;
int x,y;
  
  class GPA{

    public:

        int n=x,m=y;

        void theory(){
          cout<<"Number of Theory Subjects: ";
          cin>>n;
          for(int i=1; i<=n; i++){
            int f;
            cout<<"Enter Theory marks in  Subject "<<i<<" :  ";
            cin>>f;
          }
         }


          void practical(){
          
          cout<<"Number of Practical Subjects: ";
          cin>>m;

         for(int i=1; i<=m; i++){
            int f;
            cout<<"Enter Theory marks in  Subject "<<i<<" :  ";
            cin>>f;
          }
         }

         void calculation(){
          float gpa;
          // gpa = a1+ a2;

         }
  
     };


  
   class Calculator{

    public:

       void menu(float  x, float y){


           float add = x + y;
           float sub = x - y;
           float mult = x * y;
           float div = x / y;
          //  int mod = x % y;

          cout<<"1) Addition"<<endl;
          cout<<"2) Subtraction"<<endl;
          cout<<"3) Multiplication"<<endl;
          cout<<"4) Division"<<endl;
          // cout<<"5) Modulus"<<endl;
           int z;
           cout<<endl<<"   Selction : " ;
           cin>>z;

           

           if(z == 1){
          cout<<"Addition: "<<add<<endl;}
          else if(z == 2){
          cout<<"Subtraction: "<<sub<<endl;
5
          } else if(z == 3){
          cout<<"Multiplication: "<<mult<<endl;
            
          } else if(z == 4){
          cout<<"Division: "<<div<<endl;
        
          }
             else {
              cout<<"Invalid Selection: "<<endl;
             }
       
      }


   };



   
int main(){
      int a;

      cout<<endl<<"1) GPA calculation"<<endl;
      cout<<endl<<"2) Mathematical Calculation";
      cout<<endl<<"3) Exit"<<endl;
      cout<<endl<<"Selection ";
      cin>>a;

      if (a==1){
    
    GPA first;   
    
      cout<<endl<<"***********GPA Calculator********* \n\n"<<endl;

    first.print();
    first.theory();
    first.practical();
      }
     else if(a==2){
      Calculator first;
          int r,s;
          cout<<"Enter Number 1: ";
          cin>>r;
          cout<<"Enter Number 2: ";
          cin>>s;
          
       first.menu(r,s);

     }
     
     return 0;
     }
       

