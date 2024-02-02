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

        ll n , m;
        cin>>n>>m;
        ll arr[m] , cnt = 0;
        for(ll i = 0; i < m; i++)
        {
            cin>>arr[i];
            if(i == 0)
                cnt += arr[i] - 1;
            else
            {
                if(arr[i] < arr[i-1])
                {
                    cnt += (n - arr[i-1] + arr[i]);
                }
                else
                {
                    cnt += arr[i] - arr[i-1];
                }
            }
        }
        cout<<cnt<<nl;

    
    return 0;
}
    