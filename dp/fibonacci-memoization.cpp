#include<iostream>
#include<vector>
using namespace std;
int fib(int n,vector<int> &dp){
    if(n<=1){
        return n;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    return dp[n] = fib(n-1,dp)+fib(n-2,dp); //storing subproblems solution
}
int main(){
    int n;
    vector<int> dp(n+1,-1);
    cin>>n;
    cout<<fib(n,dp);
    return 0;
}