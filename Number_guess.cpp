#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>


using namespace std;
int main(){
  system("cls");
      

      srand((unsigned int) time(NULL));
      int ran= rand()%100 +1;
     cout<<endl<<endl;


    cout<<setw(50)<<"WELCOME TO NUMBER GUESS GAME"<<endl;

     int guess= 0;
     char again;

    do{
         cout<<"Guess Number(1-100): ";
         cin>>guess;
         cout<<endl<<endl;
   
         if (ran==guess){
           cout<<"Yo Hooo!! You Guess the Corrct number!\n"<<endl;
           cout<<"Do you want to Play again?(y/n) ";
           cin>>again;
           cout<<endl;
         
         }

         else if (guess<=ran){
           cout<<"your Guess is Low(Guess higher next time)\n\n"<<endl;
   
         }
   
         else{
           cout<<"your Guess is High(Guess lower next time)\n\n"<<endl;
         }


    } while(again != 'n');


  return 0;
}