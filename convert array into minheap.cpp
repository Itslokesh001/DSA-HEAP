#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void heapfiy(vector<int>&arr,int n,int index){
    int small=index;
    int left=2*index+1;
    int right=2*index+2;
    if(left<n && arr[left]<arr[small]){
        small=left;
    }
     if(left<n && arr[right]<arr[small]){
        small=right;
    }
    if(small!=index){
        swap(arr[small],arr[index]);
        heapfiy(arr,n,small);
    }
}
void maxheap(vector<int>&arr, int n){
    for(int i=n/2-1;i>=0;i--){
        heapfiy(arr,n,i);
    }
}
void print(vector<int>&arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int>arr={4,5,6,2,3,5,10};
    int n=arr.size();
    maxheap(arr,n);
    print(arr,n);
}