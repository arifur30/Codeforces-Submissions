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
        ll n,last_p_index, last_n_index, neg = 0;
        cin >> n;
        vll arr(n);
        bool flag = false;
        for(ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] == 0)
                flag = true;
            else if(arr[i] < 0)
            {
                ++neg;
             //   last_n = arr[i];
                last_n_index = i+1;
            }
            else{
            //    last_p = arr[i];
                last_p_index = i+1;
            
            }
        }
        if(flag)
        {
            cout<<"0\n";
            continue;
        }
        else{
            if(!neg)
            {
                cout<<1<<nl;
                cout<<last_p_index<<" "<<0<<nl;
                continue;
            }
            if(neg&1)
            {
                cout<<0<<nl;
                continue;
            }
            else{
                cout<<1<<nl;
                cout<<last_n_index<<" "<<0<<nl;
            }
        }
        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
