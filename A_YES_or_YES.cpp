#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"


int main(){
  
  
  ll t;
  cin>>t;
  while (t--)
  {
    char s[4];
    cin>>s;
    for(int i = 0; i < strlen(s); ++i)
        s[i] = tolower(s[i]);
    if(!strcmp(s,"yes"))
        YES;
    else NO;
    
  }
  
  return 0;
}
    