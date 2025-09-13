#include<bits/stdc++.h>
using namespace std;

using ll = long long;
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


ll sub(ll num, ll minus)
{

    // cout << "num: " << num << nl;
    // cout << "minus : " << minus << nl;
    if(minus % 10 == 0) return num;

    ll b = minus % 10;

    
    if(b > num)
    {
        b -= num;
        num = 10;
        num -= b;
        

    }
    else num -= b;

  //  cout << "new num: " << num << nl;
    return num;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll sum  = 0;
    string n;
    cin >> n;

    ll i = n.size() - 1;
    sum  += ((n[i] - '0')% 10);
    ll minus = sum;
    sum++;

    // cout << "sum : " << sum << nl;
    
    i--;
    while(i >= 0)
    {
        ll temp = sub((n[i] - '0')% 10, minus);
        minus += temp;
        sum += temp; 
        sum++;

        // cout << "sum : " << sum << nl;
        i--;

    }

    cout << sum << nl;


    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
