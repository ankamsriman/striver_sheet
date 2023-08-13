#include <bits/stdc++.h> 

ll dp[100010];
ll rec(ll l)
{
    if(l==0||l==1)
    {
        return 1;
    }
    if(dp[l]!=-1)
    {
        return dp[l];
    }
    ll ans=0;
    ans+=rec(l-1)+rec(l-2);
    ans=ans%1LL*(1e9+7);
    return dp[l]=ans;
}


int frogJump(int n, vector<int> &heights)
{
    for(int i=0;i<=n;i++)
    {
        dp[i]=-1;
    }
    return rec(n);
}
