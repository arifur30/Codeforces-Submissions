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

ll find_n(ll a, ll b, ll c)

{
    ll n1 = a / 0.5;
    ll n2 = b / 0.95;
    ll n3 = c / 0.99;
    if(a == n1*0.5)
        return n1;
    else if(b == n2*0.95)
        return n2;
    else return n3;


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    
        ll n1, n2, n3, cnt = 0, n;
        cin >> n1 >> n2 >> n3;

       // cout << find_n(n1, n2, n3) << endl;

        n = find_n(n1,n2,n3);
        cout << n << nl;

        for(ll i = 1, j = 1; j <= n1; j++)
        {
            cout << i << " ";
        }

        ll temp = n2 / 0.95;
        if(n2 == temp*0.95)
            for (ll i = 51, j = n1+1; j <= n2;  j++)
                cout << i << " ";
        
        temp = n3 / 0.99;
        if(n3 == temp*0.99)
            for (ll i = 96, j = n2+1; j <= n3;j++)
                cout << i << " ";

        for (ll i = 100, j = n3+1; j <= n;j++)
            cout << i << " ";

        cout << nl;

        
    
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
