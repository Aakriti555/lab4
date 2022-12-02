#include <iostream>
#include "sort.cpp"
#include <random>
#include <vector>
#include <time.h>

using namespace std;

int main(){
    vector<int> arr;
    srand(11);
    for(int i=35000;i>0;i--){
        arr.push_back(rand());
    }
    cout<<time(NULL)<<endl;
    Quicksort(arr,35000);
    cout<<time(NULL)<<endl;

    return 0;
}