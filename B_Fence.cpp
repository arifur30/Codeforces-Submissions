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
    
    ll n , k;
    cin>>n>>k;
    ll arr[n], brr[n+1];
    ll sum = 0;
    for(ll i = 0, j = 1; i < n; i++)
    {
        cin>>arr[i];
        sum += arr[i];
        if(i >= k){
            sum -= arr[i-k];
            brr[j++] = sum;}
        else 
            brr[j++] = sum;

        
    }
    ll index = k;
    ll min = brr[k];
    for(ll i = k; i <= n; i++)
    {
        if(brr[i] < min)
        {
            min = brr[i];
            index = i;
        }
    }

    cout<<index-k+1<<nl; 

    
    return 0;
}
    