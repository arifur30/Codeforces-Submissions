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

bool isPerfectInteger(double num) {
    return std::floor(num) == num;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>>t;
    while (t--)
    {
        ll n, cnt =0;
        cin>>n;
        double odd = 0, even = 0;
        vll arr(n+1);
        for(ll i = 1; i <= n; i++)
        {
            cin >> arr[i];
            if(i & 1)
                odd += arr[i], cnt++;
            else
                even += arr[i];
        }        
        if(cnt == 0)
            odd = 0;
        else
            odd /= cnt;
     //   odd /= cnt;
        if(n-cnt == 0)
            even = 0;
        else
            even /= (n-cnt);
       // cout << "odd : " << odd << " even : " << even << nl;
    if(odd >= 0 && even >= 0 && isPerfectInteger(odd) && isPerfectInteger(even))
    {
        if(odd == even)
            YES;
        else NO;
    }
    else NO;
    
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
