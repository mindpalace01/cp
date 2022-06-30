#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n, ans = 0;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++)
        cin >> a[i];
    for(ll i = 1; i < n; i++)
    {
        if(a[i] < a[i-1])
        {
            ans += a[i-1] - a[i];
            a[i] = a[i-1];
        }
    }
    cout << ans;
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