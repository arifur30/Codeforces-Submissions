#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"
#define arrin(arr, n) for(ll i = 0; i < n; i++) cin>>arr[i]
#define arrout(arr, n) for(ll i = 0; i < n; i++) cout<<arr[i]<<" ";cout<<nl
#define arrin2(arr, b, n) for(ll i = 0; i < n; i++) {cin>>arr[i];b[i] = arr[i];}
#define arr2Din(arr, n, m) for(ll i = 0; i < n; i++) for(ll j = 0; j < m; j++) cin>>arr[i][j]
#define fr(i, n) for(ll i = 0; i < n; i++)
#define frr(i,n) for(ll i = n-1; i >= 0; i--)
#define pb push_back
#define vll vector<ll>
#define MOD 1000000007
#define all(x) x.begin(), x.end()



int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>>t;
    while (t--)
    {
        int n, last, cnt = 1;
        cin >> n; 
        vector<int> v(n);
        arrin(v, n); 
        bool flag = true, head = true;
        last = gcd(v[0], v[1]);
        //cout << "last: " << last << nl;
        for(int i = 1; i<n-1;i++)
        {
            if( gcd(v[i], v[i+1]) >= last){
                last = gcd(v[i], v[i+1]);
              //  cout << "good: v[i]: " << v[i] << " v[i+1]: " << v[i+1] << " " << last << nl;
                
                }
            else{
                if(i == 1)
                {
                    head = false;
                    last = gcd(v[i], v[i+1]);
                    continue;
                }
                if(cnt && head)
                {
                    cnt--;
                    if(i == n-2) continue;
                    if( gcd(v[i], v[i+2]) >= last)
                    {
                        

                        last = gcd(v[i], v[i+2]);
                        i++;
                        // cout << "v[i]: " << v[i] << " v[i+2]: " << v[i+2] << nl;
                        // cout << "v[i+1]: " << v[i+1] << " last " << last<< nl;
                    }
                    else
                    {
                        NO;
                        flag = false;
                        break;
                    }
                    
                }
                else
                {
                    NO;
                    flag = false;
                    break;
                }
            }
        }
        if(flag)
            YES;
        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
