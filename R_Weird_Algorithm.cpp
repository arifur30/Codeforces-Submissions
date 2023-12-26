#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"


int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  ll n;cin>>n;
  cout<<n<< " ";
  while(n!=1)
  {
    if(n%2 == 0)
    {
        n /= 2;
        cout<<n<< " ";
    }
    else
    {
        n*=3;
        n++;
        cout<<n<< " ";
    }

  }
  cout<<nl;
  
  return 0;
}
    