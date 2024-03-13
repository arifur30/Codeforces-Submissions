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

    ll a, b;
    cin>>a>>b;

    if(a < b)
    {
        
        cout<<a<<nl;
        return 0;
    }
    else
    {
        ll cnt = 0;
        a -= b;
        cnt += b+1;
        --b;
        while(a > 0)
        {
            if(a >= b)
            {
                a -= b;
                cnt += b+1;
            }
            else
            {
                cnt += a;
                a = 0;
            
            }
        }
        cout<<cnt<<nl;
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
