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

    ll n ;
    cin>>n;
    vector <pair<ll, ll>> vp;
    for(ll i  = 0; i < n; i++)
    {
        ll a, b;
        cin>>a>>b;
        vp.push_back({a, b});
    }

    sort(vp.begin(), vp.end());
    bool flag = false;
    for(auto it = vp.begin(); it != vp.end(); it++)
    {

        auto it1 = it;
        it1++;
        if(it1 == vp.end())
            break;
        else
        {
            if(it->second > it1->second)
            {
                cout<<"Happy Alex"<<nl;
                flag = true;
                break;
            }
        }
    }
    if(!flag)
        cout<<"Poor Alex"<<nl;


    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
