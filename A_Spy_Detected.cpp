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
        ll n;
        cin >> n;
        ll a[n], first, second, cnt1 = 0, cnt2 = 0,in1 , in2;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            if(i==0)    {
                first = a[i];
                cnt1++;
                in1 = i;
            }
            else if(a[i]==first)    cnt1++;
            else{
                second = a[i];
                cnt2++;
                in2 = i;
            }
            }
            if(cnt1 == 1)   cout<<in1+1<<nl;
            else    cout<<in2+1<<nl;
    }
    
    return 0;
}
    