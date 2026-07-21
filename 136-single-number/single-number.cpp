#include <algorithm>
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i=0;

sort(nums.begin(), nums.end());
      /*  int i=0,j=nums.size()-1,sum1=0,sum2=0;
        while(i<=nums.size()/2){
            sum1=sum1+nums[i];
            i++;
        }
        while(j>nums.size()/2){
              sum2=sum2+nums[j];
            j--;
        }
        return abs(sum1-sum2);
    }*/
    while(i<nums.size()-1){
        if(nums[i]==nums[i+1])i=i+2;
        else return nums[i];
    }
    return nums[i];
    }
};