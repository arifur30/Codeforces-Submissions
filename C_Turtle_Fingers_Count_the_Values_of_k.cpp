#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"
#define arrin(arr, n) for(ll i = 0; i < n; i++) cin>>arr[i]
#define arrout(arr, n) for(ll i = 0; i < n; i++) cout<<arr[i]<<" ";cout<<nl

bool isDistinctPositiveDivision(int numerator, int denominator) {
    // Check if denominator is not zero
    ll ans = numerator / denominator;
    if(denominator*ans == numerator)
        return true;
    return false;
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
        ll a, b, l, cnt = 0;
        cin>>a>>b>>l;
        int err = 0;
        for(ll i = 0; ;i++)
        {
            if(isDistinctPositiveDivision(l, pow(a,i)*pow(b,0)) == false || !isDistinctPositiveDivision(l, pow(a,0)*pow(b,i)))
            {
                break;
            }
            for(ll j = 0;isDistinctPositiveDivision(l, pow(a,i)*pow(b,j)) ; j++)
            {
                cnt++;
                if(isDistinctPositiveDivision(l, pow(a,j)*pow(b,i)))
                    ++cnt;
            }
        }
        cout<<cnt<<nl;
        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
