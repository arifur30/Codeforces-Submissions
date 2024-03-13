#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"
#define arrin(arr, n) for(ll i = 0; i < n; i++) cin>>arr[i]
#define arrout(arr, n) for(ll i = 0; i < n; i++) cout<<arr[i]<<" ";cout<<nl

void solve(ll m, ll s)
{
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll m , s;
    cin>>m>>s;
    if(s == 0 && m > 1 || s > m*9)
    {
        cout<<"-1 -1"<<nl;
        return 0;
    }
    else
    {
       // solve(m, s);
        vector <ll> v(m);
    ll lastIndex;
    for(ll i = 0; i < m;i++)
    {
        v[i] = min(s, (ll)9);
        s -= v[i];
        if(v[i] )
            lastIndex = i;

    }
    string ans = "";
    for(ll i = 0 ; i < m; i++)
    {
        ans += to_string(v[i]);
    }
    string ans1 = "";
    if(v[m-1] == 0){
        v[m-1]++;
        v[lastIndex]--;
    }
    for(ll i = m-1; i >= 0; i--)
    {
        ans1 += to_string(v[i]);
    }
    cout<<ans1<<' '<<ans<<nl;
    }
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
