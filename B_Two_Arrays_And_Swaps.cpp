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
    while (t--)
    {
        ll n , k;
        cin>>n>>k;
        ll arr1[n], arr2[n], sum1 = 0;
        for (ll i = 0; i < n; i++)
        {
            cin>>arr1[i];
            sum1 += arr1[i];
               /* code */
        }
        for(ll i = 0; i < n;i++)
            cin>>arr2[i];
        if(!k)
        {
            cout<<sum1<<nl;
            continue;
        }
        sort(arr1, arr1+n);
        sort(arr2, arr2+n);

        for(ll i = 0, j = n-1; i < n; i++)
        {
            if(arr2[j] > arr1[i])
            {
                sum1 -= arr1[i];
                sum1 += arr2[j--];
                --k;
                if(!k)
                    break;
            }
            else break;
        }
        cout<<sum1<<nl;
            
    }
    
    return 0;
}
    