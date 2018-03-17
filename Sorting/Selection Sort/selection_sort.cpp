#include <vector>
#include <iostream>
#include <stdlib.h>
using namespace std;

/*
* Selection sort algorithm
*/
void selectionSort ( vector<int> &unsorted ) {
    int i, j, minIdx, tmp;

    // Loop over all numbers in vector
    for( i = 0; i < unsorted.size(); i++ ){
        minIdx = i;

        for(j = i + 1; j < unsorted.size(); j++){
            if(unsorted[j] < unsorted[minIdx]){
                minIdx = j;
            }
        }

        tmp = unsorted[i];
        unsorted[i] = unsorted[minIdx];
        unsorted[minIdx] = tmp;        
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
    selectionSort(unsorted);

    // Print sorted vector
    for (i = 0; i < unsorted.size(); i++){
        cout << unsorted[i] << ", ";
    }
    cout << endl;

    return 0;
}