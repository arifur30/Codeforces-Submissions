#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"



int main(){
 
  long long n;
  cin>>n;
  string s = "";
  while (n>0)
  {
    int mo = n %10;
    if( mo > 4)
    {
        if(mo == 9 && n/10 == 0)
            s += to_string(mo);
        else
            s += to_string(9-mo);
    }
    else
        s+= to_string(mo);
    n /= 10 ;
  }
  for(int i = s.size() - 1; i >=0; i--)
    cout<<s[i];
    cout<<nl;
  return 0;
}