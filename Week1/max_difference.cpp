#include <bits/stdc++.h>
using namespace std;

int maximumDifference(vector<int> arr){
    int max_diff = 0;
    int min_so_far = arr[0];

    for(int i = 1; i < arr.size(); i++){
        if(arr[i] > min_so_far){
            max_diff = max(max_diff , arr[i] - min_so_far);
        }
        else{
            min_so_far = min(min_so_far , arr[i]);
        }
    }

    if(max_diff == 0) return -1; 
    return max_diff;
}

int main(){
    cout << (maximumDifference(vector<int> { 7, 1, 5, 4 }) == 4) << endl;
    cout << (maximumDifference(vector<int> { 9, 4, 3, 2 }) == -1) << endl;
    cout << (maximumDifference(vector<int> { 1, 5, 2, 10 }) == 9) << endl;
    cout << (maximumDifference(vector<int> { 1, 10 }) == 9) << endl;
    cout << (maximumDifference(vector<int> { 5, 5, 5 }) == -1) << endl;
    cout << (maximumDifference(vector<int> { 1, 2, 3, 4 }) == 3) << endl;
    cout << (maximumDifference(vector<int> { 8, 7, 1, 4, 6 }) == 5) << endl; 
    cout << (maximumDifference(vector<int> { 5, 4, 3 }) == -1) << endl;
}