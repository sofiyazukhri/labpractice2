#include <iostream>
using namespace std;

int main()
{
    int INT_SIZE=10;
    int INT[INT_SIZE];
    int sum =0;
    int largest , smallest;

    cout << "Please enter 10 integers: "<<endl;
    for (int i =0; i<10; i++){
        cin >> INT[i];
        sum = sum + INT[i];
    }
    //find the largest element 
    largest = INT[0];
    smallest = INT[0];
    for (int i=1; i<10; i++){
        if (INT[i]>largest)
        largest = INT[i];
        if (INT[i]<smallest)
        smallest = INT[i];
    }
    cout << "The largest element is "<<largest<<endl;
    cout << "The smallest element is "<<smallest<<endl;
    //find the average
    double average = sum/10.0;
    cout << "Average of the 10 elements is: "<<average;


}