class Solution {
public:
    bool isPalindrome(int x) {
        int rev=0,d;
        int o=x;
      while(x!=0){
        if(rev>INT_MAX/10 ||rev<INT_MIN/10 )return 0;
        rev=(10*rev)+x%10;
        x=x/10;
      }
      if(o==rev&&o>=0)return true;
      else return false;
    }
};