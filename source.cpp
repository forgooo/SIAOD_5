#include "Buble.h"
#include "Insertion.h"

int main(){
    cout << "BUBBLE SORT\n";
    cout << "-------------------------------------\n";
    bublesort();
    cout << "-------------------------------------\n";
    bublesort_best();
    cout << "-------------------------------------\n";
    bublesort_worst();
    cout << "-------------------------------------\n";
    cout << "END BUBBLE SORT\n";
    cout << "#####################################\n";
    cout << "INSERTION SORT\n";
    cout << "-------------------------------------\n";
    insertionsort();
    cout << "-------------------------------------\n";
    insertionsort_best();
    cout << "-------------------------------------\n";
    insertionsort_worst();
    cout << "-------------------------------------\n";
    cout << "END INSERTION SORT\n";
    return 0;
}