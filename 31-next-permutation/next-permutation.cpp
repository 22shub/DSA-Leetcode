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
/*
Approaches:

1. Brute Force:
   Generate all possible permutations and find the next greater permutation.
   Time: O(n!) | Space: O(n)

2. Better (my approach):
   Traverse from right to find the first position that can be increased.
   Search the right side for a greater element, swap it, then reverse
   the remaining suffix.
   Time: O(n²) | Space: O(1)

3. Optimal:
   find the right most elemt that is just > j whereas j decc from right to left 
   Use the ordered suffix to find the required element without a nested
   search, then swap and reverse the suffix.
   then after j we just jave to reverse the leftover array
   Time: O(n) | Space: O(1)
*/
