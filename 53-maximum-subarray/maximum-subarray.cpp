class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        int l=0,h=nums[0],psum=0,maxsum=nums[0];
        for(int i=0;i<nums.size();i++){
            psum=psum+nums[i];
            if(psum-l>maxsum)maxsum=psum-l;
            if(l>psum)l=psum;
            
            }
            return maxsum;
        }
        
};