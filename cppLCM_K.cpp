

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
 ll n,k;
 cin>>n>>k;
 string s;
 cin>>s;
 while(k--){
    string ss;
    map<char,ll>mp;
    for(ll i=0;i<ss.size();i++){
        mp[ss[i]]+=i+1;
    }
    ll m=0;
    char cx;
    for(auto it:mp){
        if(it.second>m){
            m=it.second;
            cx=it.first;
        }
    }
    for(ll i=0;i<s.size();i++)



 }
}
