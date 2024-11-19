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
#define vll vector<int>
#define MOD 1000000007
#define all(x) x.begin(), x.end()

ll k;
void printBinary(int x, int totalbit)
{
    for(int i = totalbit-1; i>=0; i--)
    {
        cout<<((x>>i)&1);
    }
    cout<<endl;
}

bool isGood(int &a, int &b)
{
    int cnt = 0;
    for(int i = 0; i < 21; i++)
    {
        if(((a>>i)&1) != ((b>>i)&1))
            cnt++;
    }
    return cnt <= k;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n , m , cnt = 0;
    cin>>n>>m>>k;
    vll a(++m);
    arrin(a, m);

    for(int i = 0; i < m-1; i++)
        if(isGood(a[i], a[m-1]))
            cnt++;
    
    cout<<cnt<<nl;
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
