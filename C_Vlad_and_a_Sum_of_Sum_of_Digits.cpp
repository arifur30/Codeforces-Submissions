#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"
#define arrin(arr, n) for(ll i = 0; i < n; i++) cin>>arr[i]
#define arrout(arr, n) for(ll i = 0; i < n; i++) cout<<arr[i]<<" "

vector<ll>v;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    v.push_back(0);
    for(ll i=1, sum;i<=200000;++i)
	{
		ll tmp = i;
		sum = 0;
		while(tmp)
		{
			sum += tmp%10;
			tmp /= 10;
		}
		v.push_back( v[i-1] + sum);
	}
    ll t;
    cin>>t;
    while (t--)
    {
        
        ll n;
        cin>>n;
        cout<<v[n]<<nl;
    }
    
    return 0;
}






// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
