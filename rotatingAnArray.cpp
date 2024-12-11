#include <iostream>
using namespace std;
//function to rotate the array
void rotateArray (int INT[],int size){
    int last = INT[size -1];
    //shift  all elements 
    for (int i= size-1; i>0; i--){
        INT[i]=INT[i-1];
    }
    INT[0]=last;
}
//function to print 
void printArray(int INT[], int size){
    for (int i=0; i<size; i++)
    cout<<INT[i]<<" ";
}
int main(){
    int INT[5];
    //input 5 integer
    cout <<"Enter 5 integers: ";
    for (int i=0; i<5; i++){
        cin>>INT[i];
    }
    // display the original array
    cout<<"Original array: ";
    printArray(INT, 5);
    //rotate the array
    rotateArray(INT,5);
    //print the rotated array
    cout << "\nThe rotated array: ";
    printArray(INT,5);
}