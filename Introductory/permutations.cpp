#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    if(n == 1)
    	cout << 1;
    else if(n < 4)
    	cout << "NO SOLUTION";
    else
    {
    	ll i = 2;
    	while(i <= n)
    	{
    		cout << i << " ";
    		i += 2;
    	}
    	i = 1;
    	while(i <= n)
    	{
    		cout << i << " ";
    		i += 2;
    	}
    	
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1, i = 1;
    //cin >> t;
    while(t--)
    {
        //cout << "Case #" << i << ": ";
        solve();
        //i++;
    }

    return 0;  
    
}