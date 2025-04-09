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

    ll n,sum_p = 0, sum_n = 0, mx = INT_MIN;
    cin >> n;
    vll arr(n);
    fr(i,n)
    {
        cin >> arr[i];
        mx = max(arr[i], mx);
        if(arr[i] > 0)
            sum_p += arr[i];
        else sum_n += arr[i];
    }
   // cout << mx << " ";
    if(mx < 0)
    {
        cout << abs(sum_n) << nl;
        
    }
    else
    {
        ll nn = 0;
        for(ll l = 0, r = 0, sum = 0; r < n; r++)
        {
            sum += arr[r];
            while(arr[l] < 0 && sum - arr[l] >= mx)
            {
                sum -= arr[l];
            
                l++;
                
                mx = max(mx, sum);
            }
            if(arr[r] )
            mx = max(sum, mx);
        }
       // cout << mx << nl;
        sum_p = sum_p - mx ;
        cout << sum_n << " : " << nn << nl;
    }
    


    return 0;
}



// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
