//ANKAM SRIMAN
#include <bits/stdc++.h> 

vector<int>dp,h;
int rec(int l)
{
    if(l==0)
    {
        return 0;
    }
    if(dp[l]!=-1)
    {
        return dp[l];
    }
    int ans=rec(l-1)+abs(h[l]-h[l-1]);
    if(l-2>=0)ans=min(ans,rec(l-2)+abs(h[l]-h[l-2]));
    return dp[l]=ans;
}


int frogJump(int n, vector<int> &heights)
{
    h=heights;
    dp.clear();
    dp.resize(n+1,-1);

    return rec(n-1);
}
