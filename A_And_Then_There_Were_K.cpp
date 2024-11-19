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



void printBinary(int x, int totalbit)
{
    for(int i = totalbit-1; i>=0; i--)
    {
        cout<<((x>>i)&1);
    }
    cout<<endl;
}

long long binaryexpPow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
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
        
        int n, last;
        cin>>n;

        for(int i = 0, tem; i < 30; i++)
        {
           // printBinary((int) (1 <<i), 12);
          //  printBinary((int)n, 12);
            if(tem = ((n >> i) &1) == 1) 
            //    cout << "n = "<<n<<" i = "<<i<< " " << tem<<nl, 
                last = i;
        }
      //  printBinary((int) (1 <<last), 12);
        cout<<binaryexpPow(2,last)-1<<nl;
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
