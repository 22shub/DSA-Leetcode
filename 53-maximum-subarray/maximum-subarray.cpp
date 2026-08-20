class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max,sum=INT_MIN;
            for(int i=0;i<nums.size();i++){
                max=max+nums[i];
                if(sum<max)sum=max;
                if(max<0)max=0;
            }
            return sum;
            //kadens algo best solution
      /*  if(nums.size()==1)return nums[0];
        int l=0,h=nums[0],psum=0,maxsum=nums[0];
        for(int i=0;i<nums.size();i++){
            psum=psum+nums[i];
            if(psum-l>maxsum)maxsum=psum-l;
            if(l>psum)l=psum;
            
            }
            return maxsum;
            */
            //my solution using prefix sum ,same tc and sc as kadanes
        }
        
};