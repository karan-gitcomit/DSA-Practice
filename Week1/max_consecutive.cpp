#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> arr){
    int current_streak = 0;
    int max_streak = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == 1){
            current_streak += 1;
            max_streak = max(max_streak , current_streak);
        }
        else{
            current_streak = 0;
        }
    }
    return max_streak;
}

int main(){
    cout << (findMaxConsecutiveOnes(vector<int> { 1, 1, 0, 1, 1, 1 }) == 3) << endl;
    cout << (findMaxConsecutiveOnes(vector<int> { 1, 0, 1, 1, 0, 1 }) == 2) << endl;
    cout << (findMaxConsecutiveOnes(vector<int> { 0, 0, 0 }) == 0) << endl;
    cout << (findMaxConsecutiveOnes(vector<int> { 1, 1, 1, 1 }) == 4) << endl;
    cout << (findMaxConsecutiveOnes(vector<int> { 1, 0, 0, 1 }) == 1) << endl;
    cout << (findMaxConsecutiveOnes(vector<int> { 0, 1, 0, 1, 1 }) == 2) << endl;
}