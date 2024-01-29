#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll s, n;
    cin>>s>>n;
    bool flag = true;
    pair<ll, ll> p1[n];
    for(ll i = 0; i < n; i++)
{
    
    ll x, y;
    cin>>x>>y;
    p1[i] = make_pair(x, y);
    
}
    for(ll i = 0; i < n- 1; i++)
    {
        for(ll j = 0; j < n - i - 1; j++)
        {
            if(p1[j].first == p1[j + 1].first)
            {
                if(p1[j].second < p1[j + 1].second)
                {
                    swap(p1[j], p1[j + 1]);
                }
            }
            if(p1[j].first > p1[j + 1].first)
            {
                swap(p1[j], p1[j + 1]);
            }
        }
    }
    for(ll i = 0; i < n; i++)
    {
        if(s > p1[i].first)
        {
            s += p1[i].second;
        }
        else
        {
            flag = false;
            NO;
            break;
        }
    }

    if(flag)
    {
        YES;
    }
    return 0;
}
    