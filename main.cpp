#include <iostream>
#include "sort.cpp"
#include <random>
#include <vector>
#include <time.h>
#include "quick_sort.cpp"
using namespace std;

int main()
{
    vector<int> arr;
    srand(11);
    for (int i = 35000; i > 0; i--)
    {
        arr.push_back(rand());
    }

    cout << "for inertion sort" << endl;
    cout << time(NULL) << endl;
    InsertionSort(arr, 35000);
    cout << time(NULL) << endl
         << endl;

    srand(11);
    int maxsize = 5000000;

    RandomGenerator(arr, maxsize);
    cout << "for quick sort" << endl;
    int i = time(NULL);
    cout << time(NULL) << endl;
    quickSort(arr, 0, maxsize - 1);
    cout << time(NULL) << endl;
    int j = time(NULL);
    cout << j - i << endl;
    return 0;
}
