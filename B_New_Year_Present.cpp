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
#define arr2din(arr, n, m) for(ll i = 0; i < n; i++) for(ll j = 0; j < m; j++) cin>>arr[i][j]
#define fr(i, n) for(ll i = 0; i < n; i++)
#define pb push_back
#define vll vector<ll>


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;
    ll sum  =0, arr[n];
    fr(i,n)
    {
        cin>>arr[i];
        sum += arr[i];
    }
    bool flag = false;
if(arr[0] > 0)
{
    
    cout<<"PR";
    arr[0]--;
    sum--;
}
else{
    cout<<"R";
}
    while(sum)
    {
        for(ll i = 1; i<n && sum; i++)
        {
            if(arr[i])
            {
                cout<<"P";
                arr[i]--;
                sum--;
            }
            if(i < n-1 && sum)
                cout<<"R";
            if(i == n-1 && sum)
                cout<<"L";
            
        }
     //   cout<<nl<<arr[0] << " "<<arr[1]<<nl;
        for(ll i = n-2; i>=0 && sum; i--)
        {
            if(arr[i])
            {
                cout<<"P";
                arr[i]--;
                sum--;
            }
            if(i > 0 && sum)
                cout<<"L";
            if(i == 0 && sum)
                cout<<"R";
            
        }
    }
    cout<<nl;
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
