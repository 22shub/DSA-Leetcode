class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int target = nums.size() / 3, vote1 = 0, vote2 = 0;
        vector<int> v;
        if (nums.size() < 2) {
            v.push_back(nums[0]);
            return v;
        }
        int candidate1 = nums[0], candidate2 = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == candidate1)
                vote1++;
            else if (nums[i] == candidate2)
                vote2++;
            else if (vote1 == 0 && candidate2 != nums[i]) {
                candidate1 = nums[i];
                vote1++;
            } else if (vote2 == 0 && candidate1 != nums[i]) {
                candidate2 = nums[i];
                vote2++;
            } else {
                vote1--;
                vote2--;
            }
        }
        vote1 = 0;
        vote2 = 0;

        for (int x : nums) {
            if (x == candidate1)
                vote1++;
            if (x == candidate2)
                vote2++;
        }
        if (vote1 > target)
            v.push_back(candidate1);

        if (vote2 > target && candidate2 != candidate1)
            v.push_back(candidate2);

        return v;
    }
};
//brute->pick each elemet and calculate for it tc-O(n^2)
//better->sort array then check tc-O(nlogn)+(logn)~nlogn
