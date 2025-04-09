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
    // vector<int> count(100, 0);
    // int cnt = 0;
    // for(int i = 0; i < 100; i++)
    // {
    //     if(i%3 == i%5)
    //     {
    //         cnt++;
    //     }
    //     count[i] = cnt;
    // }

    int t; cin >> t;

    while (t--)
    {
        /* code */

        int n;
        cin >> n;

        if(n <15) 
        {
            if(n == 0) cout << 1 << nl;
            else if(n== 1) cout << 2 << nl;
            else if(n == 2) cout << 3 << nl;
            else if(n >= 3 && n < 15) cout << 3 << nl;
            continue;
        }

        int cnt = 3,sum;
        sum = n / 15;
        cnt += max(0,(sum-1)*3) + 1;
        if(n - sum*15 >=2)
        {
            cnt += 2;
        }
        else cnt += max(0, (n - sum*15));

        cout << cnt << nl;

    }
    
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
