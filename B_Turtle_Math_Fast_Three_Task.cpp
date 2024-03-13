#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"
#define arrin(arr, n) for(ll i = 0; i < n; i++) cin>>arr[i]
#define arrout(arr, n) for(ll i = 0; i < n; i++) cout<<arr[i]<<" ";cout<<nl



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
  //      vector<ll> v(100001);
        ll arr[n], sum = 0;
        for(ll i = 0; i < n; i++)
        {
            cin>>arr[i];
            sum += (arr[i]);
        }
        if(sum % 3 == 0)
            cout<<0<<nl;
        else
        {
            if(n == 1)
            {
                cout<<1<<nl;
                continue;
            }
           if((sum+1) %3 == 0)
           {
                cout<<1<<nl;
                continue;
           }
            bool flag = false;
           for(ll i = 0; i < n; i++)
           {
                if((sum-arr[i])%3 == 0)
                {
                    cout<<1<<nl;
                    flag = true;
                    break;
                }
           }
           if(!flag)
                cout<<2<<nl;
            
        }
        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
