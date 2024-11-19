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

    ll n, m , M;
    cin >> n  >> M;
    vll arr(n), presum(n);
    for(ll i = 0;i<n;i++)
    {
        cin >> arr[i];
        if(i == 0)
        {
            presum[i] = arr[i];
        }
        else
        {
            presum[i] = presum[i-1]+ arr[i];
        }
    }
   // arrout(presum, n);
    cin >> m;

    while(m--)
    {
        ll l , r;
        cin >> l >> r;
        if(l == r)
        {
            if(arr[l-1] % M == 0)
                cout<< 1 <<nl;
            else cout << 0 << nl;
        }
        else{
            l--;r--;
            while((presum[r] - presum[l] + arr[l])% M != 0 && l < r)
            {
                r--;
            }
            if(r == l &&( presum[r] - presum[l] + arr[l]) %M != 0)
                cout << 0 << nl;
          //  cout << "B" << r << l << nl;
            else
            cout << r- l +1 << nl;
        }
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
