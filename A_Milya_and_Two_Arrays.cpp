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
        ll n;
        cin >> n;
        ll a[n], b[n], cnt_1 = 0, cnt_2 = 0;
        
        unordered_map<ll, ll> freq1, freq2;
        fr(i,n)
        {
            cin >> a[i];
            if(freq1[a[i]] == 0)
                cnt_1++;
            freq1[a[i]]++;
        }
       
        fr(i,n)
        {
            cin >> b[i];
            if(freq2[b[i]] == 0)
                cnt_2++;
            freq2[b[i]]++;
        }

        if(cnt_1 < 2 && cnt_2 < 2)
        {
            NO;
            continue;
        }
        else if(cnt_1 >= 3 or cnt_2 >=3)
        {
            YES;
            continue;
        }
        else if(cnt_1 == 2 and cnt_2 < 2)
            NO;
        else if(cnt_1 < 2 and cnt_2 == 2)
            NO;
        else
        {
            YES;
            continue;
        }


        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
