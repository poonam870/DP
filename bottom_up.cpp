//code for helper funstion (boottom up dp)
int helper(int n){
	    vector<int>dp(n+1);
	    dp[0]=0;
	    dp[1]=0;
	    if(n<=1) return 0;
	    for(int i=2;i<=n;i++){
	        int x=dp[i-1];
	    int y=INT_MAX,z=INT_MAX;
	    if(i%2==0){
	        y=dp[i/2];
	    }
	    if(i%3==0){
	        z=dp[i/3];
	    }
	    dp[i]=min(x,min(y,z))+1;
	    }
	  return dp[n];
	    
}
	int minSteps(int N) 
	{   
	    helper(N);
	} 
