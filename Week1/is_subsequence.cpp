#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string s , string t){
    int i = 0;
    int j = 0;
    while(j < t.size()){
        if(s[i] == t[j]) i++;
        j++;
    }
    if(i == s.size()) return true;
    return false;
}

int main(){
    cout << (isSubsequence("abc", "ahbgdc") == true) << endl;
    cout << (isSubsequence("axc", "ahbgdc") == false) << endl;
    cout << (isSubsequence("", "ahbgdc") == true) << endl;
    cout << (isSubsequence("ace", "abcde") == true) << endl;
    cout << (isSubsequence("aec", "abcde") == false) << endl;
    cout << (isSubsequence("hello", "hello") == true) << endl;
    cout << (isSubsequence("sing", "stinging") == true) << endl;
}