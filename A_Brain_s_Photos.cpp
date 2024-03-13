#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"
#define arrin(arr, n) for(ll i = 0; i < n; i++) cin>>arr[i]
#define arrout(arr, n) for(ll i = 0; i < n; i++) cout<<arr[i]<<" ";cout<<nl



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n , m;
    cin >> n >> m;
    char a;
    bool flag = false;
    for(ll i = 0; i<m*n; i++)
    {
        cin >> a;
        if(a == 'C' || a == 'M' || a == 'Y')
            flag = true;
    }
    if(flag)
        cout << "#Color" << nl;
    else
        cout << "#Black&White" << nl;
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
