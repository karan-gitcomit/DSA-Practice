#include <iostream>

void printPairs(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            std::cout << arr[i] << "," << arr[j] << std::endl;
        }
    }
} 

int main(){
    int arr[] = {1,2,3,4,5};
    printPairs(arr,5);
}