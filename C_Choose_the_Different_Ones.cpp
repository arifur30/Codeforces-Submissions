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

    while(t--)
    {
        ll n , m , k, tst, c1 = 0, c2 = 0;
        cin>>n>>m>>k;
        map<ll,bool> arr1, arr2;

     //   vector<ll> a, b;
        for(ll i = 0; i < n; i++)
        {
            cin >> tst;
            arr1[tst] = true;
        }

        for(ll i = 0; i < m; i++)
        {
            cin >> tst;
            if(tst <= k){
               // b.push_back(tst);
                arr2[tst] = true;
            }
        }
        // cout_v_int(a);
        // cout_v_int(b);
        bool flag = true;
        for(ll i = 1; i <= k; i++)
        {
            if(!arr1[i] && !arr2[i])
            {
                flag = false;
                break;
            }
            else if(arr1[i] && !arr2[i])
            {   
                c1++;
            }
            else if(!arr1[i] && arr2[i])
            {
                c2++;
                
            }
        }
        if(!flag){
            NO;
            continue;}
        else{
            if(c1 <= k/2 && c2 <= k/2)
                YES;
            else
                NO;
        }
    }
    return 0;
}
