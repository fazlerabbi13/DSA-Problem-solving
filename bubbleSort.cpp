#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr){
    int n = arr.size();
    bool swapped;

    for(int i=0;i<n-1;i++){
        swapped=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(!swapped){
            break;
        }
    }
}


void printArr(const vector<int> &arr){
    for(int val:arr){
        cout<< " " << val;
    }
}

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bubbleSort(arr);
    printArr(arr);
    
    return 0;
}