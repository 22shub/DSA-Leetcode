class Solution {
public:
    bool check(vector<int>& nums) {
     //if array is sortted in non dec. order after rotation there is only one timme a condition 
     //where element at n+1<ele, at n throught the iteration
     int count =0;
     for(int i=0;i<nums.size()-1;i++){
        if(nums[i]>nums[i+1])count++;
     }
     if(nums[0]<nums[nums.size()-1])count++;
    if(count==1 || count==0)return true;
    else return false;
    }
};