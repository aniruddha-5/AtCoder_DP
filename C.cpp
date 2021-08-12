/* Aniruddha Routh JGEC'23 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int dp[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>dp[i][j];
        }
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(j==0)
            dp[i][j]+=max(dp[i-1][1],dp[i-1][2]);
            else if(j==1)
            dp[i][j]+=max(dp[i-1][0],dp[i-1][2]);
            else if(j==2)
            dp[i][j]+=max(dp[i-1][0],dp[i-1][1]);
        }
    }
    int ans=max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2]));
    cout<<ans<<endl;
}


