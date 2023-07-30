#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int helper(int n,vector<int>&dp){
    if(n<=1) return 0;
    if(dp[n]!=-1){
        return dp[n];
    }
    int x=helper(n-1,dp);
    int y=INT_MAX,z=INT_MAX;
    if(n%2==0){
        y=helper(n/2,dp);
    }
    if(n%3==0){
        z=helper(n/3,dp);
    }
    int ans=min(x,min(y,z))+1;
    dp[n]=ans;
    return dp[n];
}
int minsteps(int n){
    vector<int>dp(n+1,-1);
    return helper(n,dp);
}

int main(){
    int n;
    cin>>n;
    cout<<minsteps(n);

}
