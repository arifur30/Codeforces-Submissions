#include<bits/stdc++.h>
using namespace std;

int main(){
  long long t;
  cin>>t;
  while (t--)
  {
    long long m, n, k, x, c, diff;
    cin>>m>>n>>k;
    c = ceil((double)k/m);
    x = (c-1)*m;
    ++x;
    diff = k - x;
    cout<<c+(diff*n)<<endl; 
  }
  
  return 0;
}