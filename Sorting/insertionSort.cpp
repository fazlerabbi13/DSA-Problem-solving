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

int main(){

    return 0;
}