#include <bits/stdc++.h>
using namespace std;

int findSecondSmallest(vector<int> arr){
    int smallest_element = INT_MAX;
    int second_smallest = INT_MAX;

    for(int i = 0; i < arr.size(); i++){
        if(smallest_element > arr[i]){
            second_smallest = smallest_element;
            smallest_element = arr[i];
        }
        else if(smallest_element < arr[i] && arr[i] < second_smallest){
            second_smallest = arr[i];
        }
    }
    if(second_smallest == INT_MAX) return -1;
    return second_smallest;
}

int main(){
    cout << (findSecondSmallest(vector<int> { 12, 25, 8, 55, 10, 33, 17, 11 }) == 10) << endl;
    cout << (findSecondSmallest(vector<int> { 2, 4, 3, 5, 6 }) == 3) << endl;
    cout << (findSecondSmallest(vector<int> { 1, 1, 1, 2, 2, 2, 3 }) == 2) << endl;
    cout << (findSecondSmallest(vector<int> { 1, 2, 2, 2, 3 }) == 2) << endl;
    cout << (findSecondSmallest(vector<int> { 10, 5 }) == 10) << endl;
    cout << (findSecondSmallest(vector<int> { -3, -1, -7, -5 }) == -5) << endl;
    cout << (findSecondSmallest(vector<int> { 5, 5, 5, 5, 5 }) == -1) << endl;
    cout << (findSecondSmallest(vector<int> { 1 }) == -1) << endl;
    cout << (findSecondSmallest(vector<int> { -5, 0, 5, -10 }) == -5) << endl;
}