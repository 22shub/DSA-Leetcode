class Solution {
public:
//long long factorial(int n){
   // if(n==0 || n==1)return 1;
   // return n*factorial(n-1);
//}
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v;
        for(int i=0;i<numRows;i++){
            v.push_back(vector<int>(i+1));
            v[i][0]=1;
            v[i][i]=1;
            for(int j=1;j<i;j++){
                v[i][j]=v[i-1][j-1]+v[i-1][j];
            }
            
        }
        return v;
        }
        
};
//brute-> use factorial tc-O(n^3)
//optimal->O(n^2)