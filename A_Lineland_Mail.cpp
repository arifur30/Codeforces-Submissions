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
#define pb push_back
#define vll vector<ll>


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin>>n;
    ll arr[n];
    arrin(arr, n);
    
    fr(i,n)
    {
        ll mIn = INT_MAX, mAx = INT_MIN;
        if(i == 0)
        {
            mIn = abs(arr[i] - arr[i+1]);
            mAx = abs(arr[0] - arr[n-1]);
        }
        else if(i == n-1){
            mAx = abs(arr[i] - arr[0]);
            mIn = abs(arr[i] - arr[i-1]);
        }
        else{

            mIn = min(abs(arr[i] - arr[i-1]), abs(arr[i] - arr[i+1]));
            mAx = max(abs(arr[i] - arr[0]), abs(arr[i] - arr[n-1]));
            }
        cout<<mIn<<" "<<mAx<<nl;
    }
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
