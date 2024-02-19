#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"
#define arrin(arr, n) for(ll i = 0; i < n; i++) cin>>arr[i]
#define arrout(arr, n) for(ll i = 0; i < n; i++) cout<<arr[i]<<" "


ll binaryToDecimal(ll n)
{
    ll num = n;
    ll dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    ll base = 1;
 
    ll temp = num;
    while (temp) {
        ll last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
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
        
        ll n;
        cin>>n;
        ll arr[n], cnt = 0, serial = 0;
        for(ll i = 0; i < n; i++)
        {
            cin>>arr[i];
            arr[i] = binaryToDecimal(arr[i]);
            
        }
        for(ll i = 1; i<n;i++)
        {
            if(arr[i] == arr[i-1] &&  __builtin_popcount(arr[i]) > 0)
            {
                cnt++;
                serial++;
            }
            else if(cnt>0 && arr[i] != arr[i-1])
            {
                break;
            }
        }
        if(cnt > 0 && serial > 0)
            cout<<"SQUARE"<<nl;
        else
            cout<<"TRIANGLE"<<nl;
    }
    
    return 0;
}






// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
