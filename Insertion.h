#include <iostream>
#include <ctime>
#include <vector>
#include <chrono>
using namespace std;

void insertionsort(){
    srand(time(NULL));
    cout << "DEFAULT\n";

    for(int SIZE = 100; SIZE != 1000000; SIZE*=10) {
        vector<int> data(SIZE);

        for (int item: data) {
            item = rand() % SIZE * 10;
        }
        cout << "SIZE = " << SIZE << " | ";
        auto start = chrono::steady_clock::now();
        //start
        int i, key, j;
        for (i = 1; i < SIZE; i++)
        {
            key = data[i];
            j = i - 1;
            while (j >= 0 && data[j] > key)
            {
                data[j + 1] = data[j];
                j = j - 1;
            }
            data[j + 1] = key;
        }
        //end
        auto end = chrono::steady_clock::now();
        auto diff = end - start;
        cout << chrono::duration<double, milli>(diff).count() << " ms\n";
        data.clear();
    }
}

void insertionsort_best(){
    srand(time(NULL));
    cout << "THE BEST\n";

    for(int SIZE = 100; SIZE != 1000000; SIZE*=10) {
        vector<int> data(SIZE);

        for(int i = 0; i < SIZE; i++) data[i] = i;
        cout << "SIZE = " << SIZE << " | ";
        auto start = chrono::steady_clock::now();
        //start
        int i, key, j;
        for (i = 1; i < SIZE; i++)
        {
            key = data[i];
            j = i - 1;
            while (j >= 0 && data[j] > key)
            {
                data[j + 1] = data[j];
                j = j - 1;
            }
            data[j + 1] = key;
        }
        //end
        auto end = chrono::steady_clock::now();
        auto diff = end - start;
        cout << chrono::duration<double, milli>(diff).count() << " ms\n";
        data.clear();
    }
}

void insertionsort_worst(){
    srand(time(NULL));
    cout << "THE WORST\n";

    for(int SIZE = 100; SIZE != 1000000; SIZE*=10) {
        vector<int> data(SIZE);

        for(int i = 0; i < SIZE; i++) data[i] = SIZE - i;
        cout << "SIZE = " << SIZE << " | ";
        auto start = chrono::steady_clock::now();
        //start
        int i, key, j;
        for (i = 1; i < SIZE; i++)
        {
            key = data[i];
            j = i - 1;
            while (j >= 0 && data[j] > key)
            {
                data[j + 1] = data[j];
                j = j - 1;
            }
            data[j + 1] = key;
        }
        //end
        auto end = chrono::steady_clock::now();
        auto diff = end - start;
        cout << chrono::duration<double, milli>(diff).count() << " ms\n";
        data.clear();
    }
}