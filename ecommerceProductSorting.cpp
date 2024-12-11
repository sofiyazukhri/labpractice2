#include <iostream>
#include <string>
using namespace std;

int main(){
    const int NUM_PRODUCTS = 10;
    string names[NUM_PRODUCTS];
    double prices[NUM_PRODUCTS];
    string categories[NUM_PRODUCTS];

    // Prompt user to enter product details
    for (int i = 0; i < NUM_PRODUCTS; i++){
        cout << "Enter details for product " << i + 1 << ":\n";

        cout << "Name: ";
        cin >> names[i];

        cout << "Price: ";
        cin >> prices[i];

        cout << "Category: ";
        cin >> categories[i];
    }

    // Display product information
    cout << "\nProduct List: \n";
    cout << "-----------------------------------------------------\n";
    cout << "Name\t\tPrice\t\tCategory\n";
    cout << "-----------------------------------------------------\n";
    
    for (int i = 0; i < NUM_PRODUCTS; i++){
        cout << names[i] << "\t\t" << prices[i] << "\t\t" << categories[i] << endl;
    }

    return 0;
}
