#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr,int st,int end,int mid){
    vector<int>temp;

    int i=st,j=mid+1;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i<= mid){
        temp.push_back(arr[i]);
        i++;
    }

    while(j<=end){
        temp.push_back(arr[i]);
        j++;
    }

    for(int index=0;index<temp.size();index++){
        arr[index+st]=temp[index];
    }
}

void mergeSort(vector<int> &arr,int st,int end){
    if(st<end){
        int mid=st+(end-st)/2;

        mergeSort(arr,st,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,st,mid,end);
    }
}

int main(){

    vector<int> arr={2,4,6,3,1,7,0};
    mergeSort(arr,0,arr.size()-1);

    for(int value: arr){
        cout<<value<<" ";
    }
    cout<<endl;
    return 0;
}