#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define nl "\n";
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  ll t;
  cin>>t;
  while (t--)
  {
    
    ll n;
    cin>>n;
    if (n%2 == 1)
    {
        cout<<7;
        n -= 3;
        while(n > 0)
        {
            cout<<1;
            n -=2;
        }
        cout<<nl;
        
    }
    else
    {
        while (n>0)
        {
            cout<<1;
            n -= 2;
        }
        cout<<nl;
        
    }
    

  }
  
  return 0;
}
    