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
        ll n;
        cin>>n;
        ll arr[n+1], unique = 0, cnt = 0 ;
        for(ll i = 1; i <= n; i++)
        {
            cin>>arr[i];
            if(i > 1 && arr[i] != arr[i-1])
            {
                unique=1;
            }
        }
        if(n ==2 && arr[1] == arr[2])
        {
            cout<<"0\n";
            continue;
        }
        else if(n ==2 && arr[1] != arr[2])
        {
            cout<<1<<nl;
            continue;
        }
        else if(!unique)
        {
            cout<<"0\n";
            continue;
        }
        else if(arr[1] == arr[n])
        {
            ll l = -1, r = -1;
            for(ll i = 1; i <=n; i++)
            {
                if(arr[i] != arr[1])
                {
                    l = i;
                    break;
                
                }
            }
            for(ll i = n; i >= 1; i--)
            {
                if(arr[i] != arr[1])
                {
                    r = i;
                    break;
                }
            }
            if(l == -1 && r == -1)
            {
                cout<<0<<nl;
                continue;
            }
            else
            {
               cout<<r-l+1<<nl;
            }
        }
        else
        {
            ll l = 1 , r = n, l1 , r1;
            l1 = l;
            r1 = r;
            while(l < n && arr[l] == arr[l+1])
                l++;
            while(r > 1 && arr[r] == arr[r-1])
                r--;
            if(l == r)
            {
                cout<<cnt<<nl;
                continue;
            }
            else if(l > r)
            {
                cout<<0<<nl;
                continue;
            }
            else
            {
                //cout<<min(r- l1 , r1 - l )<<" "<<cnt<<" ";
                cnt += min(r- l1 , r1 - l );
                
            }
            cout<<cnt<<nl;
        }
          
    }
    
    return 0;
}
    