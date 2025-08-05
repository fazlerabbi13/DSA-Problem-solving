#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr){
    int n = arr.size();
    for(int i = 0; i<n; i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[min_index]){
                min_index=j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
}

// void printArray(vector<int>arr){
//     for(int &value: arr){
//         cout<<value<<" ";
//     }
// }

// int main(){

//     vector<int>arr={2,7,0,4,1,5,3,7,9};
//     selectionSort(arr);
//     printArray(arr);
//     return 0;
// }