#include <iostream>
#include <string>
using namespace std;

int main(){
    //declare array
    const int NUM_ITEMS = 5;
    string names[NUM_ITEMS];
    double prices [NUM_ITEMS];
    int quantities [NUM_ITEMS];
    double total = 0.0;

    //prompt user to enter data 
    for (int i = 0; i<5; i++){
        cout << "\nEnter details for item "<< i+1 <<": \n";
        cout << "Name: ";
        cin >> names[i];
        cout << "Price : ";
        cin >> prices[i];
        cout << "Quantity : ";
        cin >> quantities[i];
    }
    //display the items and calculate the total value
    cout << "\n------------------- Summary ---------------------\n";
    cout << "Name\t\tPrice\t\tQuantity\n";
    cout << "-------------------------------------------------\n";

    for (int i=0; i<5; i++){
        cout << names[i] << "\t\t" << prices[i]<<"\t\t"<<quantities[i]<<endl;
        total = total + (prices[i] * quantities[i]); 
    }

    //display total value
    cout << "-------------------------------------------------\n";
    cout << "Total for all the items: RM"<<total<<endl;

    return 0;
}