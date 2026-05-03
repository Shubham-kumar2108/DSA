class Solution {
public:

    vector<int> dp;

    int solve(int n){
        if(n<=1)
        return n;

        if(dp[n]!= -1)
        return dp[n];

        return dp[n] = solve(n-1) + solve(n-2);
    }

    int fib(int n) {
        // if (n==0 || n==1){
        //     return n;
        // }
        // return fib(n-1)+fib(n-2) ;
        dp.resize(n+1,-1);

        return solve(n);
    }
};