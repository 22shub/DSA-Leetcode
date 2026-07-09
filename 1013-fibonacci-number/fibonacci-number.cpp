class Solution {
    int fn(int n){
        if(n==0)return 0;
        if(n==1)return 1;
        return fn(n-1)+fn(n-2);
    }
public:
    int fib(int n) {
        return fn(n);
    }
};