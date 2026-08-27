class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()==1)return;
        int j=nums.size()-2,k=0;
        while(j>=0){
            for(int i=j+1;i<nums.size();i++){
                if(nums[i]>nums[j])k=i;
            }
            if(k>j){
            swap(nums[k],nums[j]);
            break;
            }
            j--;
        } 
          reverse(nums.begin()+j+1,nums.end()); 
        }
        
         
    
};