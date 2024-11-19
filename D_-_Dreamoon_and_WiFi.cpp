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

    string s1, s2;
    cin>>s1>>s2;
    ll cnt = 0, p1 = 0, p2 = 0, m1 = 0, m2 = 0;
    ll n = s1.size();
    fr(i,n)
    {
        if(s1[i] == s2[i])
            cnt++;
        else
        {
            if(s1[i] == '+')
                p1++;
            else if(s1[i] == '-')
                m1++;
            if(s2[i] == '+')
                p2++;
            else if(s2[i] == '-')
                m2++;
        }
    }

    if(p1 && p2)
        cnt += p2;
    if(m1 && m2)
        cnt += m2;
    cout<<fixed<<setprecision(12)<<(double)cnt/(double)n<<nl;
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
