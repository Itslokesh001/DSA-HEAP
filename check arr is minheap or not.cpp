#include<bits/stdc++.h>
using namespace std;
bool checkminheap(vector<int>&arr,int n){
    for(int i=0;i<n/2-1;i++){
        int left = 2*i+1;
        int right= 2*i+2;
        if(left<n && arr[left]<arr[i]){
            return false;
        }
        if(right<n && arr[right]<arr[i]){
            return false;
        }
        return true;
    }
}
int main(){
    vector<int>arr={2,3,5,5,4,6,10};
    int n =arr.size();
    cout<<checkminheap(arr,n);
}