class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,j=0,k=nums.size()-1;
        while(j<=k){
            if(nums[j]==0 && nums[i]!=0){
                swap(nums[i],nums[j]);
                i++;
            }
            if(nums[j]==2 && nums[k]!=2){
                swap(nums[k],nums[j]);
                k--;
            }
            if(nums[j]==0 && nums[i]!=0){
                swap(nums[i],nums[j]);
                i++;
            }
           // if(nums[j]==1 || j<i)j++;
            if(nums[i]==0)i++;
            if(nums[k]==2)k--;  
            if(nums[j]!=2)j++;  
            }
        }
    
};