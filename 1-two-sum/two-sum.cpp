class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        vector<int>v;
                for(int i=0;i<nums.size();i++){
            int s=target-nums[i];
            if(m.find(s)!=m.end()){
                v.push_back(m[s]);
                v.push_back(i);
                break;
            }
            m[nums[i]]=i;
        }
    return v;
    }
};