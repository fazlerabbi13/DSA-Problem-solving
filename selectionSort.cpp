#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int> &arr){
    int n=arr.size();

    for(int i =0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}

void printArr(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        cout<< " "<< arr[i];
    }
}

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    selectionSort(arr);
    printArr(arr);
    return 0;
}