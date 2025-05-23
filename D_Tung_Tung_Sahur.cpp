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
        string a, b;
        cin >> a >> b;
        
        bool flag = true;
        size_t i = 0, j = 0;
        
        while(i < a.size())
        { 
            char ch = a[i];
            ll cnt1 = 0, cnt2 = 0;
            while(i < a.size() && ch == a[i])
            {
                cnt1++;
                i++;
            }
            

            while(j < b.size() && ch == b[j])
            {
                cnt2++;
                j++;
            }

            if(cnt2 > 2*cnt1 || cnt2 < cnt1)
            {
             
                flag = false;
                break;
            }
        }

        if(flag && j == b.size()) YES;
        else NO;
        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
