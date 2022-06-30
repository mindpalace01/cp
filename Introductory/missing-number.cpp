#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void solve()
{
    ll n;
    cin >> n;
    ll s = 0;
    for(ll i = 1; i <= n-1; i++)
    {
        ll a;
        cin >> a;
        s += a;
    }
    cout << n*(n+1)/2 - s;
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