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

void push(ll n, vector<ll>&arr)
{
    ll x;
    if(n == 0)
        return;
    push(n/10, arr);
    arr.pb(n%10);
}
void cout_v_int(vector<ll> &v)
{
    for(auto it = v.begin(); it != v.end(); it++) 
    {
        cout << *it <<" ";   // for printing the vector
    }
    cout<<'\n';
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
        
        ll x,n, prev;
        cin>>n;
        vector<ll>arr, brr(n);
        arrin(brr, n);
        if(is_sorted(brr.begin(), brr.end()))
        {
            cout<<"YES\n";
            continue;
        }
        else
        {
            bool f = true;
            fr(i,n-1)
            {
                if(brr[i] <= brr[i+1])
                {
                    continue;
                }
                else
                {
                    if(brr[i] % 10 <= brr[i+1] && brr[i] / 10 <= brr[i] % 10 && brr[i] / 10 >= brr[i-1] && i)
                        continue;
                    else
                    {
                        f = false;
                        break;
                    }
                }
            }
            if(f)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
