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
    
    
        ll n,cnt = 0;
        cin>>n;
        if(n == 3)
        {
            cout<<"1\n3\n";
            //continue;
        }
        else if(n&1 && n > 3)
        {
            ++cnt;
            n -= 3;
            cnt += n/2;
            cout<<cnt<<nl;
            for(ll i = 1; i < cnt; i++)
                cout<<"2 ";
            cout<<"3\n";
        }
        else
        {
            cnt = n/2;
            cout<<cnt<<nl;
            for(ll i = 1; i <= cnt; i++)
                cout<<"2 ";
        }
    
    
    return 0;
}
    