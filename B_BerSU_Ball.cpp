#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"
#define arrin(arr, n) for(ll i = 0; i < n; i++) cin>>arr[i]
#define arrout(arr, n) for(ll i = 0; i < n; i++) cout<<arr[i]<<" "


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll  n_mp[105] = {0}, m_mp[105] = {0};
    ll n , m ,cnt = 0;
    cin>>n;  
    ll a[n];  
    for(ll i = 0; i < n; i++)
    {
        cin>>a[i];
        n_mp[a[i]]++;
    }
    cin>>m;
    ll b[m];
    for(ll i = 0; i < m; i++)
    {
        
        cin>>b[i];
        m_mp[b[i]]++;
    }

    if(n < m)
    {
        sort(a,a+n);
        for(ll i = 0; i < n; i++)
        {
            
            if(m_mp[a[i] - 1] > 0)
            {
                cnt++;
                m_mp[a[i] - 1]--;
                
            }
            else if(m_mp[a[i]] > 0)
            {
                cnt++;
               m_mp[a[i]]--;  
            }
            else if(m_mp[a[i]+1] > 0 )
            {
                cnt++;
                m_mp[a[i]+1]--;   
            }
            
            else
                continue;
            
        }
    }
    else
    {
        sort(b, b+m);
        for(ll i =0;i <m;i++)
        {
            if(n_mp[b[i]-1] > 0 )
            {
                cnt++;
                n_mp[b[i]-1]--;
            }
            else if(n_mp[b[i]] > 0)
            {
                cnt++;
                n_mp[b[i]]--;
                
            }
            
            else if(n_mp[b[i]+1] > 0)
            {
                cnt++;
                n_mp[b[i]+1]--;
            }
            else
                continue;
            
        }
    }
    cout<<cnt<<nl;
    return 0;
}
    

