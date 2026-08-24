class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        unordered_set<int> h;
        int len=1;
        for(int i=0;i<nums.size();i++){
            h.insert(nums[i]);
        }
        for(int x:h){
            int l=1;
            if(h.find(x-1)==h.end()){
                int k=x+1;
                while(true){
                    if(h.find(k++)!=h.end())l++;
                    else{
                        break;
                    }
                } 
             }
                if(l>len)len=l;
        }
            return len;
        }
    
};
/*
LC 128 - Longest Consecutive Sequence

Idea:
- Put all elements in unordered_set for O(1) average lookup.
- A number x is a sequence start only if x-1 doesn't exist.
- From each start, keep checking x+1, x+2... and track maximum length.
- Iterate over the set, not nums, to avoid duplicate sequence scans.

Complexity:
Time: O(n) average
Space: O(n)

Notes:
- unordered_set stores only unique values.
- h.find(x) != h.end() -> x exists.
- h[i] doesn't work; use for(int x : h).
*/