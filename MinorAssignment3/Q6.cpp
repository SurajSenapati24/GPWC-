#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {
    const int SIZE = 10;
    int arr[SIZE];
    int shiftedArr[SIZE];

    // Seed random number generator
    srand(time(0));

    // Generate random array
    cout << "Original Array: ";
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100; // Random numbers between 0 and 99
        cout << arr[i] << " ";
    }
    cout << endl;

    // Fill first two places with random numbers between 20 and 30
    shiftedArr[0] = 20 + (rand() % 11); // 20 to 30
    shiftedArr[1] = 20 + (rand() % 11);

    // Shift the original array 2 positions to the right
    for (int i = 2; i < SIZE; i++) {
        shiftedArr[i] = arr[i - 2];
    }

    // Display the shifted array
    cout << "Shifted Array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << shiftedArr[i] << " ";
    }
    cout << endl;

    return 0;
}
