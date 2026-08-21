class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int k=0,j=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans[k]=nums[i];
                k=k+2;
            }
            if(nums[i]<0){
                ans[j]=nums[i];
                j=j+2;
            }
        }
        return ans;
    }
};
//brute-> iterate plave + num. is arr 1 and neg. in arr 2 then arrange them in answer array
//tc:o(2n),sc:o(n)---this is optimal for unequal no. of pos. and neg. for remaings to be stored at last


//optimal->tc,sc:o(n)