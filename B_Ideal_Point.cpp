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

    ll t;
    cin>>t;
    while (t--)
    {
        ll n,k,cnt  = 0, left = 0, right= 0, center = 0;
        cin>>n>>k;
        for(ll i =0;i<n;i++)
        {
            ll a, b;
            cin>>a>>b;
            if(a==k && k==b)
                center++;
            else if(a==k)
                left++;
            else if(b==k)
                right++;
            

        }  
        if(center)
            YES;
        else if(left && right)
            YES;
        else
            NO;
        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
