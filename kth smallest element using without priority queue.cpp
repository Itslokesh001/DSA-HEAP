#include<bits/stdc++.h>
using namespace std;
int findKthLargest(vector<int>& nums, int k) {
        int mn = INT_MAX;
        int mx = INT_MIN;
        for(int i=0;i<nums.size();i++){
            mn = min(nums[i],mn);
            mx= max(nums[i],mx);
        }
        vector<int>freq(mx-mn+1);
        for(int num:nums){
            freq[num-mn]++;
        }
        int rem =k;
        for(int j=0;j<freq.size();j++){
            rem=rem -freq[j];
            if(rem<=0){
                return j+mn;
            }
        }
        return -1;
    }
int main(){
 vector<int> nums={10,5,6,2,3,4};
 int k=2;
 cout<<findKthLargest(nums,k);
}