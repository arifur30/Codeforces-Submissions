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
        
        ll n , mAx = 0;
        cin>>n;
        vll arr(n);
        arrin(arr, n);
        bool flag = true;

        fr(i,n)
        {
            if(arr[i] < mAx)
            {
                NO;
                flag = false;
                break;
            }

            if(arr[i] >= 10)
            {
                if(arr[i] / 10 <= arr[i] % 10 && arr[i]/10 >= mAx)
                {
                    mAx = arr[i] % 10;
                }
                else
                {
                    mAx = arr[i];
                }
            }
            else
            {
                mAx = arr[i];
            }
        }

        if(flag)
            YES;
        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
