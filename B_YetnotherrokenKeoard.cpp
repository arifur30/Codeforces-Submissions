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
        string s;
        cin>>s;
        ll n = s.length();
        ll arr[n] = {0};
        vector<ll> capital, small;
        ll Cap = -1, Small = -1;
        for(ll i = 0; i<n;i++)
        {
            if(s[i] == 'B')
            {
                arr[i] = 1;
                if(!capital.empty())
                {
                    arr[capital.back()] = 1;
                    capital.pop_back();
                }
                
            }
            else if(s[i] == 'b')
            {
                arr[i] = 1;
                if(!small.empty())
                {
                    arr[small.back()] = 1;
                    small.pop_back();
                }
            }
            else if(s[i] >= 65 && s[i] <= 90 )
            {
                capital.push_back(i);
            }
            else
            {
                small.push_back(i);
            }
        }
        
        for(ll i = 0; i < n; i++)
        {
            if(arr[i] == 0)
            {
                cout<<s[i];
            }
        }
        cout<<nl;
        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
