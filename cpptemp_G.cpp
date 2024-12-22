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

        ll n , q, profit = 0;
        cin >> n >> q;
        map <char, pair<ll,set<ll>>> mp;  // first = cnt , second = set.index
        string s;
        cin >> s;
        ll price[n];
        arrin(price, n) ;

        for(ll i = 0; i < n; i++)
        {
            mp[s[i]].first++;
            mp[s[i]].second.insert(i);  // index insert
        }

      //  for(auto &i: mp)
       // {
        //    cout << i.first << " : " << "cnt: " << i.second.first << " " << i.second.second << nl;
        // }

        for(ll i = 0; i < q; i++)
        {
            ll type;
            cin >> type;

            if(type == 1)
            {
                ll time = 0;
                char key;
                cin >> key;

                if(mp[key].first > 0)
                {

                    profit += price[*mp[key].second.begin()];
                    time += 2* (*mp[key].second.begin() +1);
                    price[*mp[key].second.begin()] = -1;
                    mp[key].second.erase(mp[key].second.begin());
                    mp[key].first--;
                    
                    
                    cout << time <<  nl;

                //    cout << "profit : " << profit << nl;
                }
                else
                {
                    cout << -1 << nl;

                }



            }

            else
            {
                char tp;
                ll pn,buc;
                cin >> tp >> buc >> pn;
                if(price[buc-1] != -1)
                {
                    profit -= price[buc-1];
                    mp[s[buc-1]].first--;
                    mp[s[buc-1]].second.erase(buc-1);
                }

                    mp[tp].first++;
                    mp[tp].second.insert(buc-1);
                    price[buc-1] = pn;
            }
        }

        cout << profit << nl;

    }

    return 0;

}
