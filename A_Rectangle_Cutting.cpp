#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "Yes\n"
#define NO cout << "No\n"
#define nl "\n"

void solve(ll* a, ll* b)
{
    ll c,d;
    d = (*b) /2;
    c = *a + d;
    if(c == *a && d == *b || c == *b && d == *a)
        NO;
    else
        YES;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll t;
    cin>>t;
    while (t--)
    {
        ll a,b;
        cin>>a>>b;
        if(b%2 != 0 && a%2 != 0)
            NO;
        else if(b%2 == 0 && a%2 == 0)
        {
            bool flag = false;
            ll c,d;
        d = (b) /2;
        c = a + d;
        if(c == a && d == b || c == b && d == a)
            flag = false;
        else{
            YES;
            flag = true;}
        if(flag == false)
        {
            d = (a) /2;
            c = b + d;
            if(c == a && d == b || c == b && d == a)
                NO;
            else
                YES;
        }
        }
        else if(b%2 == 0 && a%2 != 0)
            solve(&a, &b);
        else if(b%2 != 0 && a%2 == 0)
            solve(&b, &a);
        else
            NO;
            
        
    }
    
    return 0;
}
    