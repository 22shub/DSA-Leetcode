class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> m;
        int i=0,sum=0,count=0;
        m[sum]=1;//m[0] = 1 represents the prefix sum before the array starts, so it naturally handles every subarray starting at index 0.
        //we can use if(sum==k)count++ also ,it is manual way and one more checking cond. every time
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            if(m.find(sum-k)!=m.end()){
                count=count+m[sum-k];
                //here we want all the occurance of sum-k since there can be multiple arraays
            }
            m[sum]++;
            }
            
            
            return count;
        }
        
};
//brute -> two loop tc:o(n^2)
