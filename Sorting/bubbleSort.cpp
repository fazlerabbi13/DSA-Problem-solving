#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr){
    int n = arr.size();
    bool swapped;

    for(int i=0; i<n-1;i++){
        swapped = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }
}

void printVector(const vector<int>&arr){
    for(int value: arr){
        cout<<" "<< value;
    }
}


int main(){
    vector<int>arr= {20,10,45,12,9,50,3};

    bubbleSort(arr);
    printVector(arr);

    return 0;
}









