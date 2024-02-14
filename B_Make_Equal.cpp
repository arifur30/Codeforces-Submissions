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
        ll arr[n], sum = 0;
        for(ll i = 0; i < n; i++)
        {
            cin>>arr[i];
            sum+= arr[i];
        }   
        if(n == 1)
        {
            cout<<"YES\n";
            continue;
        }
        else {
            sum /= n;
            ll cnt = 0;
            bool flag = true;
            for(ll i = 0; i < n;i++)
            {
                if(arr[i] >= sum)
                    cnt += (arr[i] - sum);
                else{
                    if(cnt <= 0 || cnt < (sum - arr[i]) )
                    {
                        cout<<"NO\n";
                        flag = false;
                        break;
                    }
                    else{
                        cnt -= (sum - arr[i]);
                    }
                }
            }
            if(flag)
                cout<<"YES\n";
        }

    }
    
    return 0;
}
    