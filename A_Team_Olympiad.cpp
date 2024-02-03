#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll t;
    cin>>t;
    ll arr[t], one=0, two=0, three=0;
    vector<ll> onev, twov, threev;
    for(ll i=0; i<t; i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            one++;
            onev.push_back(i+1);
        }
        else if(arr[i]==2)
        {
            two++;
            twov.push_back(i+1);
        }
        else
        {
            three++;
            threev.push_back(i+1);
        }
    }
    cout<<min(one, min(two, three))<<nl;
    for(ll i=0; i<min(one, min(two, three)); i++)
    {
        cout<<onev[i]<<" "<<twov[i]<<" "<<threev[i]<<nl;
    }
    
    return 0;
}
    