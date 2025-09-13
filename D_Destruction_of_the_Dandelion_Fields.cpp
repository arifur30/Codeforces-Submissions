#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"
#define arrin(arr, n) for(ll i = 0; i < n; i++) cin>>arr[i]
#define arrout(arr, n) for(ll i = 0; i < n; i++) cout<<arr[i]<<" ";cout<<nl
#define arrin2(arr, b, n) for(ll i = 0; i < n; i++) {cin>>arr[i];b[i] = arr[i];}
#define arr2Din(arr, n, m) for(ll i = 0; i < n; i++) for(ll j = 0; j < m; j++) cin>>arr[i][j]
#define fr(i, n) for(ll i = 0; i < n; i++)
#define frr(i,n) for(ll i = n-1; i >= 0; i--)
#define pb push_back
#define vll vector<ll>
#define MOD 1000000007
#define all(x) x.begin(), x.end()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>>t;
    while (t--)
    {
        
        ll n,even_sum = 0, sum = 0;
        cin >> n;

        vector<ll> odd;

        fr(i,n)
        {
            ll temp;
            cin >> temp;
            if(temp % 2 == 0) even_sum += temp;
            else odd.pb(temp);
        }

        sort(odd.begin(), odd.end());
        
        

        bool machine = false, even = true;

        for(ll i = 0, j = odd.size()-1; i < odd.size() && j >= 0 && i <= j; )
        {
            
            if(machine == false)
            {
                sum += odd[j];
                if(even)
                {
                    even = false;
                    sum += even_sum;
                }
                j--;
                machine = true;
            }
            else {
                i++;
                machine = false;
            }
            
        }
        
        

        cout << sum << nl;

      
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
