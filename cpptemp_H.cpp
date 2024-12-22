#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"
#define arrin(arr, n) for(ll i = 0; i < n; i++) cin>>arr[i]

const ll M=1e9+7;

ll mod_sub(ll x,ll y,ll M){
    return((x%M-y%M)+M)%M;
}

ll mod_add(ll x,ll y,ll M){
    return(x%M+y%M)%M;
}

ll powermod(ll b,ll e,ll M) {
    ll r=1;
    b=b%M;

    while(e>0){
        if(e%2==1){
            r=(r*b)%M;
        }
        e=e>>1;
        b=(b*b)%M;
    }
    return r;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    //cout << "MRGA" << endl;

    ll t;
    cin>>t;
    while(t--){

        ll n, cnt = 0;
        cin >> n;

        ll black[n], white[n];
        arrin(black, n);
        arrin(white, n);

        string konchi;

        cin >> konchi;

        for(ll i = 0; i < n; i++)
        {

            cnt += abs(black[i] - white[i])-1;



        }

      //  cout << cnt << nl;

      if(konchi == "White")
      {
          if(cnt & 1)
          {
              cout << "Konchi Baba\n";
          }
          else cout << "Denji\n";
      }
      else
      {
          if(cnt&1)
          {
              cout << "Denji\n";
          }
          else
          {
              cout << "Konchi Baba\n";
          }
      }

    }

    return 0;

}
