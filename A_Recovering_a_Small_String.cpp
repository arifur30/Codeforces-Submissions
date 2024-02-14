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
        int n;
        cin>>n;
        if(n <= 28)
        {
            cout<<"aa"<<char('a' + n - 3)<<nl;
        }    
        else
        {
            int w1 , w2, w3;
            w3 = 26;
            n -= 26;
            if(n > 26){
                w2 = 26;
                n -= 26;
            }
            else{
                w2 = n-1;
                n -= w2;
            }
            w1 = n;
            cout<<char('a' + w1 - 1)<<char('a' + w2 - 1)<<char('a' + w3 - 1)<<nl;
        }
    }
    
    return 0;
}
    