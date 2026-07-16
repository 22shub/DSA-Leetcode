class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0,max=0,j=0;
        while(i<nums.size()){
            if(nums[i]==0){
                i++;
                j=0;

            }
            else{
                i++;
                j++;
            }
            if(j>max)max=j;
            
        }
        return max;
    }
};