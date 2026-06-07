#include <bits/stdc++.h>
using namespace std;

int findSecondLargest(vector<int> arr){
    int max = INT_MIN;
    int secondLargest = INT_MIN;
    for(int i = 0; i < arr.size(); i++){
        if(max < arr[i]){
            secondLargest = max;
            max = arr[i];
        }
        else if(secondLargest < arr[i] && arr[i] < max){
            secondLargest = arr[i];
        }
        
    }
    if(secondLargest == INT_MIN) return -1;
    return secondLargest;
}

int main(){
    cout << (findSecondLargest(vector<int> { 12, 35, 1, 10, 34, 1 }) == 34) << endl;
    cout << (findSecondLargest(vector<int> { 10, 10, 10 }) == -1) << endl;
    cout << (findSecondLargest(vector<int> { 5, 2 }) == 2) << endl;
    cout << (findSecondLargest(vector<int> { 10, 5, 10 }) == 5) << endl;
    cout << (findSecondLargest(vector<int> { -10, -5, -20 }) == -10) << endl;
    cout << (findSecondLargest(vector<int> { 1 }) == -1) << endl;
    cout << (findSecondLargest(vector<int> { 7, 7, 6, 6, 5 }) == 6) << endl;
}