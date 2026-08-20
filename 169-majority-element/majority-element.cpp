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
// optimal->majority vote algorithm
//tc:O(n),SC:O(1)
//intute also->sort and middle element will be the answer since candidate elemet is present more than n/2 times
//brute->pick one find others increase count O(n^2)
//better->hashmap