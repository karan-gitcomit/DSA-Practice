#include <iostream>
#include <vector>
using namespace std;

bool isArraySorted(vector<int> arr){
    for(int i = 0; i < arr.size()-1; i++){
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    cout << (isArraySorted(vector<int> { 1, 2, 2, 3, 4, 4 }) == true) << endl;
}