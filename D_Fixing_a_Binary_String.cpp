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

bool isgood(string s, ll k)
{
    bool flag = 0;
    ll n = s.size(), cnt[2] = {0}, nowcounting = s[0] - '0';
    fr(i,n)
    {
        if(s[i] - '0' == nowcounting)
        {
            cnt[nowcounting]++;
        }
        else{
            if(cnt[nowcounting] == k )
            {
                flag = 1;
            }
            cnt[nowcounting] = 0;
            nowcounting = 1 - nowcounting;
            cnt[nowcounting]++;
        }
    }
    return flag;
}

ll findthepivot(string s, ll k)
{
    ll n = s.size(), cnt[2] = {0}, nowcounting = s[0] - '0', pivot = -1;
    fr(i,n)
    {
        if(s[i] - '0' == nowcounting)
        {
            cnt[nowcounting]++;
        }
        else{
            if(cnt[nowcounting] != k )
            {
                if(cnt[nowcounting] > k)
                    return i - k;
                else if(cnt [nowcounting] < k)
                    return i;
            }
            cnt[nowcounting] = 0;
            nowcounting = 1 - nowcounting;
            cnt[nowcounting]++;
        }
    }
    return k;

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
        
        ll n , k, n0 = 0, n1 = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        bool unq = 1;
        for(ll i = 0; i < n; i++)
        {
            if(s[i] != s[0]) unq = 0;
            if(s[i] == '0') n0++;
            else n1++;
        }
        if(unq || n1 == 0 || n0 == 0)
        {
            (n == k) ? cout << k << nl : cout << -1 << nl;
            continue;
        }
        if(n1 % k != 0 or n0 % k != 0)
        {
            cout << -1 << nl;
            continue;
        }
        if(!isgood(s, k))
        {
            cout << -1 << nl;
            continue;
        }
        else
        {
            cout << findthepivot(s, k) << nl;
        }

    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
