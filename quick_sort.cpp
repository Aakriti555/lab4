#include <iostream>
#include <time.h>
#include <cstdlib>
#include "sort.h"
#include <vector>
using namespace std;

void exchange(vector<int> &v, int i, int j)
{
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

int partition(vector<int> &v, int low, int high)
{
    int pivot = v[low];

    int count = 0;
    for (int i = low + 1; i <= high; i++)
    {
        if (v[i] <= pivot)
            count++;
    }

    // Giving pivot element its correct position
    int pivotIndex = low + count;
    swap(v[pivotIndex], v[low]);

    // Sorting left and right parts of the pivot element
    int i = low, j = high;

    while (i < pivotIndex && j > pivotIndex)
    {

        while (v[i] <= pivot)
        {
            i++;
        }

        while (v[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(v[i++], v[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(vector<int> &v, int low, int high)
{
    if (low >= high)
        return;

    // partitioning the vay
    int p = partition(v, low, high);

    // Sorting the left part
    quickSort(v, low, p - 1);

    // Sorting the right part
    quickSort(v, p + 1, high);
}

void RandomGenerator(vector<int> &v, int n)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        v.push_back(rand() % 200);
    }
}