#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n";



int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  ll t;
  cin>>t;
  while (t--)
  {
    int n;
    cin>>n;
    int sum = 1, cnt = 0,arr[n];
    //cout<<"testcase "<<t<<nl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(i)
        {
            if(arr[i-1] >= arr[i])
                arr[i]++;
        }
        
    }
sort(arr,arr+n);
    for(int i = 1; i < n;++i)
    {
        if(arr[i-1] != arr[i])
            ++sum;
    }
    cout<<sum<<nl;
    
  }
  
  return 0;
}
    