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
    ll a[t], b[t];
    ll mishka = 0, chris = 0;
    for(ll i=0; i<t; i++)
    {
        cin>>a[i]>>b[i];
        if(a[i] == b[i])
        {
            a[i] = b[i] = 0;
        }
        if(a[i] > b[i])
            mishka++;
        else if(a[i] < b[i])
            chris++;
    }
    if(mishka > chris)
        cout<<"Mishka\n";
    else if(mishka < chris)
        cout<<"Chris\n";
    else
        cout<<"Friendship is magic!^^\n";
    

    
    return 0;
}
    