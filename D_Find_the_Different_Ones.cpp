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
    
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,q;
        cin>>n; 
        vector<ll> arr(n+1);
        for(ll i = 1; i <= n; i++)
        {
            cin>>arr[i];
        }
        cin>>q;
        while(q--)
        {
            ll l , r;
            cin>>l>>r;
            bool f = false;
            for(ll i = l; i<r;i++)
            {
                ll j = i+1;
                while(arr[i] == arr[j])
                {
                    if(j < r)
                        j++;
                    else {break;}
                }
                if(arr[i] != arr[j])
                {
                    cout<<i<<" "<<j<<nl;
                    f = true;
                    break;
                }
                
            }
            
            if(!f)
            {
                cout<<-1<<" "<<-1<<nl;
            }
        }
    cout<<nl<<nl;
    }
    
    return 0;
}
    