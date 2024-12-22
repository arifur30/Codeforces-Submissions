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

bool isPerfectSquare(long long num) {
    if (num < 0) return false; // Negative numbers don't have real square roots
    long long root = static_cast<long long>(sqrt(num));
    return root * root == num;
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
        
        ll n, cnt = 0, sum = 0, sq = 1;
        cin >> n;
        ll arr[n];
        for(ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];

            if(isPerfectSquare(sum))
            {
                if((ll)sqrt(sum) % 2 != 0)
                {
              //      cout << "sum : "<<sum << nl;
                    cnt++;
                }

            }
            
        }
       // cout << sum << " " <<sq<< nl;
        cout << cnt << nl;
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
