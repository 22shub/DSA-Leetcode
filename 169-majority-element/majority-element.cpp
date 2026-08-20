class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int vote=0,candidate;
        for(int i=0;i<nums.size();i++){
            if(vote==0){
                candidate=nums[i];
                vote++;
            }
            else if(nums[i]!=candidate)vote--;
            else if(nums[i]==candidate)vote++;

            
        }
        return candidate;
    }
};
//majority vote algorithm