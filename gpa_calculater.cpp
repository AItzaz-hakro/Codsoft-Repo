#include <iostream>
#include <iomanip>
using namespace std;

double calculateGPA(int numSubjects, const char grades[]){
    double totalPoints = 0.0;


    for (int i=0; i<numSubjects;++i){
        switch (grades[i]) {
            case 'A':
                totalPoints += 4.0;
                break;
            case 'B':
                totalPoints += 3.0;
                break;
            case 'C':
                totalPoints += 2.0;
                break;
            case 'D':
                totalPoints += 1.0;
                break;
            case 'F':
                totalPoints += 0.0;
                break;
         
        }
    }
    return totalPoints/numSubjects;

}

int main(){
     system("cls");
    cout<<setw(70)<<right<<"|||||||  WELCOME TO GPA CALCULATOR  |||||\n\n\n";
    int numSubjects;
    cout<<setw(60)<<"Enter the number of subjects: "<<left;
    cin>>numSubjects;
    cout<<endl;

    if (numSubjects <= 0){
        cout<<"Invalid number of subjects. Exiting program."<<endl;
        return 1;
    }

    char *grades = new char[numSubjects];

    cout<<setw(40)<<right<<"Enter the grades for each subject (A, B, C, D, F):"<<endl<<endl;


    for (int i = 0; i < numSubjects; ++i){
        cout<<setw(40)<<right<<"Subject " << i + 1 << ": ";
        cin>>grades[i];
    }

cout<<endl<<endl;
    double gpa = calculateGPA(numSubjects, grades);

     if (gpa != -1.0){
        cout<<fixed<<setprecision(2);
        cout<<setw(40)<<"Your GPA is: "<<gpa<<endl;
     }


     return 0;
}
