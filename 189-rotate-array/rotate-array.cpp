#include<bits/stdc++.h>
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        // Reverse Array of Size N to n times will make the array same
        reverse(nums.begin()+(n-k), nums.end());
        reverse(nums.begin(),nums.begin()+(n-k));
        reverse(nums.begin(),nums.end());
        }
};