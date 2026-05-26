#include <iostream>

int elementIndex(int arr[], int target, int n){
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int result = elementIndex(arr, 30, 5);
    std::cout << result << std::endl;
}