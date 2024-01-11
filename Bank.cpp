#include<iostream>
#include<string>
#include<iomanip>
#include<conio.h>
using namespace std;


class Bank
{
   private:
      string name1="aitzaz";
      string pass1="12345";
      float Balance = 0.0;

   public:
 
    int signIN()
     {  
         cout<<setw(80) <<"||| SIGN IN PAGE |||"<<endl;

       signn:             // for repetation
 
         string  name;
         string password;
         cout<<setw(50)<<"Enter Name: ";
         cin>>name;           
      
         cout<<setw(50)<<"Enter Passoword: ";
         cin>>password;

         if(password.compare(pass1)==0 && name.compare(name1)==0)
             return 0;
          else
           {
             cout<<"invalid name or password"<<endl;
             cout<<"Press any key to try again";
             getch();
             system("cls");
             cout<<" SIGN IN AGAIN"<<endl;
             goto signn;
            }
    
      }


    int signUP()
     {   
         cout<<setw(80) <<"||| SIGN UP PAGE |||"<<endl; 
         string  name;
         string password;
         cout<<setw(50)<<"Enter Name: ";
         cin>>name;
      
         cout<<setw(50)<<"Enter Passoword: ";
         cin>>password;
     
         name1==name;
         pass1==password;
         return 0;
      }



    int mainMenu()
     {
        system("cls");
        cout<<setw(60)<<"||| MAIN MENU |||"<<endl<<endl;
        cout<<"1) Check Balance "<<endl;
        cout<<"2) Deposit Ammout "<<endl;
        cout<<"3) Withdraw Ammout"<<endl;
        cout<<"4) Exit "<<endl;
       
      }

    float balance()
     {   
         system("cls");
         cout<<"\n\n\n\n\n";
         cout<<setw(50)<<"Your Current balace is : "<<Balance<<"$";
         return Balance;
      }   

    float depositAmount()
     {
         system("cls");
         float dep;
         cout<<"Enter the Amount to Deposit :";
         cin>>dep;

         if(dep<=0.0 || dep<=0 )
         cout<<"Enter value greater than 0"<<endl;
         else
           {
              Balance+=dep;
              cout<<"Sucessfully Deposited "<<dep<<"$"<<endl;
              return Balance;
            }
      }
      
     float withdrawAmount()
     {
         system("cls");
         float wd;
         cout<<"Enter the Amount to withdraw :";
         cin>>wd;

         if(wd>Balance )
         cout<<"can not Withdraw amount, current balace is less than "<<wd<<endl;
         else
         {
          Balance-=wd;
          cout<<"Withdrawal Successful"<<endl;
          return Balance;
         }
      }
      
};



 int main()
{
     system("cls");
     Bank b1;

  login:
  
     int n;
     cout<<setw(68)<<"||| WELCOME TO ATM MACHINE |||"<<endl<<endl;
     cout<<"1) SIGN IN"<<endl;
     cout<<"2) SIGN UP (new User)"<<endl;
     cout<<"3) EXIT "<<endl;
     cin>>n;

     switch (n)
     {
       case 1:
            system("cls");
            b1.signIN();
            break;
       case 2:
            system("cls");
            b1.signUP();
            system("cls");
            goto login;
            break;
       case 3: 
            cout<<"Program Finished";
            return 0;
       default:
            cout<<"Invalid selection";
            getch();
            cout<<"\n\n\nPress any key to try again ";
            goto login;
            break;
      }

 mainmenu:
    
      b1.mainMenu();
      int m;
      cin>>m;
        
     switch(m)
     {
       case 1:  
           b1.balance();
           cout<<"\n\n\nPress any key to go back ";
           getch();
           goto mainmenu;
           break; 
       case 2:  
           b1.depositAmount();
           cout<<"\n\n\nPress any key to go back ";
           getch();
           goto mainmenu;
           break;
       case 3:  
           b1.withdrawAmount();
           cout<<"\n\n\nPress any key to go back";
           getch();
           goto mainmenu;
           break;
       case 4:  
           system("cls");
           cout<<"Program Finished";
           return 0;
           break;
       default:
           cout<<"Invalid Selection"<<endl;
           goto mainmenu;
      }   
   return 0;
}