#include<iostream>
#include<iomanip>
#include<conio.h>
#include<cstdlib>
using namespace std;
int i=0;
int k=i;
void add(int x){
    for( i=0; i<k; i++){
        cout<<i;
    }
    

};
void sub(int x){

};
void div(int x){

};
void mult(int x){

};


int main(){
     
    

   int j;
   cout<<"Enter Number count: ";
   cin >> j;

    int k;
   for(int i=1; i<=j; i++){
    cout<<"Enter"<<i<<"Number  : ";
    k=i;
    cin>>k;
    cout<<endl;
    }
    cout<<setw(50)<<"ENTER OPERATION "<<endl;
    cout<<"1) ADDITON "<<endl;
    cout<<"2) SUBRACTION "<<endl;
    cout<<"3) DIVISION "<<endl;
    cout<<"4) MULTIPICATION "<<endl;
     int  f;
     cin >> f;
       add(f);

     

     }
       
