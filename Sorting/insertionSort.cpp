#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& arr){
    int n=arr.size();
    for(int i=1;i<n;i++){
        int current = arr[i];
        int previous = i-1;

        while(previous>=0 && arr[previous]>current){
            arr[previous+1] = arr[previous];
            previous = previous-1;
        }
        arr[previous+1] = current;
    }
}

void printArray(vector<int>arr){
    for(int value:arr){
        cout<<value<<" ";
    }
}

// int main(){
//     vector<int>arr= {5,1,0,7,3,4,8,3};
//     insertionSort(arr);
//     printArray(arr);
//     return 0;
// }