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

    ll n, arr[12], cnt = 0, sum = 0;
    cin>>n;
    arrin(arr, 12);
    if(n == 0)
    {
        cout<<0<<nl;
        return 0;
    }
    sort(arr, arr+12, greater<ll>());
    fr(i,12)
    {
        if(sum < n)
        {
            sum += arr[i];
            ++cnt;
        }
        if(sum >=n)
            break;
    }
    if(sum >=n)
        cout<<cnt<<nl;
    else cout<<-1<<nl;
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
