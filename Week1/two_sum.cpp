#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> arr, int target){
    unordered_map<int , int> mp;
    for(int i = 0; i < arr.size(); i++){
        if(mp.find(target - arr[i]) != mp.end()) return {mp[target - arr[i]] , i};
        mp[arr[i]] = i;
    }
    return {};
}

int main(){
    cout << (twoSum(vector<int> { 2, 7, 11, 15 }, 9) == vector<int> { 0, 1 }) << endl;
    cout << (twoSum(vector<int> { 3, 2, 4 }, 6) == vector<int> { 1, 2 }) << endl;
    cout << (twoSum(vector<int> { 3, 3 }, 6) == vector<int> { 0, 1 }) << endl;
    cout << (twoSum(vector<int> { 1, 5, 8, 3 }, 11) == vector<int> { 2, 3 }) << endl;
    cout << (twoSum(vector<int> { -10, 5, 20, 0 }, 10) == vector<int> { 0, 2 }) << endl;
    cout << (twoSum(vector<int> { 0, 4, 3, 0 }, 0) == vector<int> { 0, 3 }) << endl;
    cout << (twoSum(vector<int> { 10, 20, 30, 40, 50 }, 90) == vector<int> { 3, 4 }) << endl;
}