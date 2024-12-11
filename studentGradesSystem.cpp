#include <iostream>
#include <string>
using namespace std;

int main(){
    const int NUM_STUDENT = 10;
    const int NUM_SUBJECT = 5;
    string studName[NUM_STUDENT];
    double grades[NUM_STUDENT][NUM_SUBJECT];
    double averages[NUM_STUDENT]={0.0};
    int highestAverageGrade = 0;

    //prompt user to enter 
    for (int i=0; i<NUM_STUDENT; i++){
        cout << "\nEnter the name of student "<<i+1<<": ";
        cin >> studName[i];

        cout << "Enter grades for "<<NUM_SUBJECT<<" subjects: \n" ;
        for (int j=0; j<5; j++){
            cout<<"Subject "<<j+1<<": ";
            cin>>grades[i][j];
         }
       }

       //calculate average grades and identify the student with the highest grade 
       for (int i=0; i<NUM_STUDENT; i++){
        double total = 0.0;
        for (int j=0; j<NUM_SUBJECT; j++){
            total += grades[i][j];
        }
        averages[i]=total/NUM_SUBJECT;
        
        //update
        if (averages[i]>averages[highestAverageGrade]){
            highestAverageGrade = i;
        }
       }

       //display the average
       cout << " \n Student Summary \n";
       for (int i=0; i<NUM_STUDENT; ++i){
       cout << studName[i]<<": "<< averages[i]<<endl;
       }
       //display the highest
       cout << "The student who got the highest mark is: \n";
       cout << "Name: "<<studName[highestAverageGrade]<<endl;
       cout << "Average grade: "<<grades[highestAverageGrade]<<endl;

       return 0;
}