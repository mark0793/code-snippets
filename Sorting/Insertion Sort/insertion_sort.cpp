#include <vector>
#include <iostream>
#include <stdlib.h>
using namespace std;

/*
 * Insertion sort algorithm
 */
void insertionSort ( vector<int> &unsorted ) {
    int i, j, tmp;

    // Loop over all numbers in vector
    for( i = 1; i < unsorted.size(); i++ ){
        //Take i-th number that has not been sorten
        tmp = unsorted[i];
        j = i - 1;

        // Find position where number left of j + 1 is smaller than tmp
        while ( j >= 0 && tmp < unsorted[j] ) { 
            unsorted[j + 1] = unsorted[j];
            j--;
        }

        // Place tmp at position j + 1
        unsorted[j + 1] = tmp;
    }
}

int main ( ) {
    vector<int> unsorted(100);
    int i;

    // Populate vector with random numbers
    for (i = 0; i < unsorted.size(); i++){
        unsorted[i] = rand() % 200;
        cout << unsorted[i] << ", ";
    }
    cout << endl;

    // Sort vector
    insertionSort(unsorted);

    // Print sorted vector
    for (i = 0; i < unsorted.size(); i++){
        cout << unsorted[i] << ", ";
    }
    cout << endl;

    return 0;
}