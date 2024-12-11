#include <iostream>
using namespace std;

// Function to display matrix
void displayMatrix(int INT[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << INT[i][j] << " ";
        }
        cout << endl;  // Add a new line after each row for better formatting
    }
}

// Function to calculate the sum of matrix elements
int calcSum(int INT[3][3]) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum = sum + INT[i][j];
        }
    }
    return sum;  // Return sum after the loops are done
}

// Function to transpose the matrix
void transposeMatrix(int INT[3][3], int transposed[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transposed[j][i] = INT[i][j];  // Transpose the matrix
        }
    }
}

int main() {
    int matrix[3][3];
    int transposed[3][3];

    // Input 9 integers to fill the matrix
    cout << "Enter 9 integers to fill the matrix: ";
    for (int i = 0; i < 3; i++) {  // Loop for rows
        for (int j = 0; j < 3; j++) {  // Loop for columns
            cin >> matrix[i][j];
        }
    }

    // Display the matrix
    cout << "Matrix: " << endl;
    displayMatrix(matrix);

    // Calculate and display the sum of all elements
    int sum = calcSum(matrix);
    cout << "The sum of the matrix is: " << sum << endl;

    // Optionally, transpose the matrix and display
    transposeMatrix(matrix, transposed);
    cout << "Transposed matrix: " << endl;
    displayMatrix(transposed);

    return 0;
}
