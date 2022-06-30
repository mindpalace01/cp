#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

const ll mod = 1000000007;

void solve()
{
    ull n;
    cin >> n;
    vector<ull> dp(n+1,0);
    dp[0] = 1;
    dp[1] = 1;
    for(ull i = 2; i <= n; i++)
    {
    	for(ull j = 1; j <= 6 && j <= i; j++)
    	{
    		dp[i] += dp[i-j]%mod;
    	}
    }
    cout << dp[n]%mod;
}
		
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ull t = 1, i = 1;
    //cin >> t;
    while(t--)
    {
        //cout << "Case #" << i << ": ";
        solve();
        //i++;
    }

    return 0;  
    
}