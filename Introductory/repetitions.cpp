#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    string s;
    cin >> s;
    ll n = s.length();
    ll i = 0, curr = 1, max = 0;
    while(i < n)
    {
        while(s[i] == s[i+curr])
            curr++;
        i += curr;
        if(curr > max)
            max = curr;
        curr = 0;
    }
    cout << max;
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