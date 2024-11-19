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
        ll n,totalzero = 0,totalone = 0,lastone;
        cin >> n;
        string s;
        cin >> s;
        if(n == 1 && s[0] == '1')
        {
            NO;
            continue;
        }
        fr(i,n)
        {
            if(s[i] == '0')
            {
                totalzero++;
            }
            else
            {
                totalone++;
                lastone = i;
            }
        
        }
        if(totalzero && !totalone)
        {
            YES;
            continue;
        }
        if(totalone % 2 != 0)
        {
            NO;
        
        }
        else if(totalone == 2 && s[lastone] == '1' && s[lastone-1] == '1')
        {
            NO;
        }
        else
        {
            YES;
        }
        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
