#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int> arr){
    int largest = INT_MIN;
    int second_largest = INT_MIN;

    int smallest = INT_MAX;
    int second_smallest = INT_MAX;

    for(int i = 0; i < arr.size(); i++){
        if(largest <= arr[i]){
            second_largest = largest;
            largest = arr[i];
        }
        else if(largest > arr[i] && arr[i] > second_largest){
            second_largest = arr[i];
        }
        if(smallest >= arr[i]){
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if(second_smallest > arr[i] && arr[i] > smallest){
            second_smallest = arr[i];
        }
    }
    return(max(largest * second_largest , smallest * second_smallest));
}

int main(){
    cout << (maxProduct(vector<int> { 3, 4, 5, 2 }) == 20) << endl;
    cout << (maxProduct(vector<int> { -10, -10, 5, 2 }) == 100) << endl;
    cout << (maxProduct(vector<int> { 1, 5, 4, 5 }) == 25) << endl;
    cout << (maxProduct(vector<int> { -1, -2, -3, -4 }) == 12) << endl;
    cout << (maxProduct(vector<int> { 10, 2 }) == 20) << endl;
    cout << (maxProduct(vector<int> { 0, 5, 0 }) == 0) << endl;
    cout << (maxProduct(vector<int> { -5, -1, 10, 8 }) == 80) << endl;
}