#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"
#define arrin(arr, n) for(ll i = 0; i < n; i++) cin>>arr[i]
#define arrout(arr, n) for(ll i = 0; i < n; i++) cout<<arr[i]<<" "



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin>>n;
    ll cnt = 0, sum = 0;
    for(ll i =1 ; i<=n;i++)
    {
        sum += i;
        n -= sum;
        if(n < 0)
        {
            break;
        }
        else cnt++;
    }
    cout<<cnt<<nl;
    
    return 0;
}






// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
