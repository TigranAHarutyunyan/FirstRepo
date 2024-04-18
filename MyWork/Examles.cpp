#include <iostream>

void InputArray(int Arr[][3], int numRows, int numCols) {
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            std::cout << "Enter Array[" << i << "][" << j << "]: ";
            std::cin >> Arr[i][j];
        }
    }
}

void PrintArray(int Arr[][3], int numRows, int numCols) {
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            std::cout << Arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int numRows, numCols;

    std::cout << "Enter number of rows: ";
    std::cin >> numRows;

    std::cout << "Enter number of columns: ";
    std::cin >> numCols;

    int Arr[numRows][3];  // Declare the 2D array with dynamic row size

    InputArray(Arr, numRows, numCols);
    PrintArray(Arr, numRows, numCols);

    return 0;
}

