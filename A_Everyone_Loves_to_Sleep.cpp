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
        
        ll n , H, R, h, r;
        map<ll,ll> mp;
        cin>>n>>H>>R;    
      //  bool f1 = false;
    //    min_h = INT_MAX;
        // min_r = INT_MAX;
        for(ll i =0; i < n; i++)
        {
            cin>>h>>r;
            if(h<H)
            {
                ll temp = ((R>r)?(60-R+r):(r-R+1));
                    if(temp >=60)
                    {
                        mp[24-H+h] = min(mp[24-H+h], temp);
                    }
                    else
                        mp[23-H+h] = min(mp[23-H+h], temp);
                    }
                //mp[(23-H)+h] = min(60-r, mp[23-H+h]);
              //  min_r = min(min_r,60-r);
            
            else
            {
                
                    ll temp = ((R>r)?(60-R+r):(r-R+1));
                    if(temp >=60)
                    {
                        mp[h-H+2] = min(mp[h-H+2], temp);
                    }
                    else
                        mp[h-H+1] = min(mp[h-H+1], temp);
                    
                
            }
        }
        auto it = mp.begin();
        cout<<it->first<<" "<<it->second<<nl;

    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
