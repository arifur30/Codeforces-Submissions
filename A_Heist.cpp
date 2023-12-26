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
  
  int t;
  cin>>t;
  int arr[t];
  for (int i = 0; i < t; i++)
  {
    cin>>arr[i];
  }
  sort(arr,arr+t);
  int cnt = 0;
  for(int i =1; i < t;++i)
  {
    if(arr[i] - arr[i-1] > 1)
        cnt += arr[i] - arr[i-1] - 1;
  }
  cout<<cnt<<nl;
  
  return 0;
}
    