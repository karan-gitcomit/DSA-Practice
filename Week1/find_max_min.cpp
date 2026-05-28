#include <iostream>
#include <vector>
using namespace std;

vector<int> findMaxAndMin(vector<int> arr){
    int max = arr[0];
    int min = arr[0];

    for(int i = 0; i < arr.size(); i++){
        if(max < arr[i]) max = arr[i];
        if(min > arr[i]) min = arr[i];
    }
    return {min , max};
}

int main(){
    cout << (findMaxAndMin(vector<int> { 1, 1, 1, 1 }) == vector<int> { 1, 1 }) << endl;
}