#include<bits/stdc++.h>
using namespace std;
int findKthSmallest(vector<int>&nums,int k){
    priority_queue<int>pq;
    for(int i=0;i<nums.size();i++){
        if(pq.size()<k){
            pq.push(nums[i]);
        }
        else if(nums[i]<pq.top()){
            pq.pop();
            pq.push(nums[i]);
        }
    }
    return pq.top();
}
int main(){
    vector<int>nums={10,5,6,7,2,3,5,4};
    int k=2;
    cout<<findKthSmallest(nums,k);
}