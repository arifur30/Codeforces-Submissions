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
        ll m , n;
        cin>>n>>m;
        ll arr1[n], arr2[m], sum1 = 0, sum2 = 0;
        for(ll i = 0; i < n; i++)
        {
            cin>>arr1[i];
           // sum1 += arr1[i];
        }
        for(ll i = 0; i < m; i++)
        {
            cin>>arr2[i];
        }
        sort(arr2, arr2+m);
       
         for(ll i = 0, j = 0, z = m - 1; i < n; i++)
         {
       ll t1 = abs(arr1[i] - arr2[z]);
         ll t2 = abs(arr1[i] - arr2[j]);
          if(t1 >= t2){
               sum1 += t1;
                 z--;
            }

           else{
               sum1 += t2;
                 j++;
              }
        }
        sort(arr1,arr1+n);
        for(ll i = 0, j = 0, z = m - 1; i < n; i++)
         {
       ll t1 = abs(arr1[i] - arr2[z]);
         ll t2 = abs(arr1[i] - arr2[j]);
          if(t1 >= t2){
               sum2 += t1;
                 z--;
                 
            }

           else{
               sum2 += t2;
                 j++;
              }
        }
        if(sum1 > sum2)
          cout<<sum1<<nl;
        else
          cout<<sum2<<nl;

    }
    
    return 0;
}
    