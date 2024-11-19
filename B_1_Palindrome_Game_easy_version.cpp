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

bool isBinaryPalindrome(unsigned int x) {
    unsigned int reversed = 0;
    unsigned int original = x;

    while (x > 0) {
        reversed <<= 1;
        reversed |= (x & 1);
        x >>= 1;
    }

    return original == reversed;
}

ll binaryToDecimal(ll n)
{
    ll num = n;
    ll dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    ll base = 1;
 
    ll temp = num;
    while (temp) {
        ll last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
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
        bool turn = false;
        ll n, num,cnt1 = 0, cnt2 = 0;
        cin>>n >> num; 
        num = binaryToDecimal(num);

        fr(i,__popcount(num))
        {
            if(!isBinaryPalindrome((unsigned int)num) && !turn)
            {
                cnt1++;
            }
            else if(!isBinaryPalindrome((unsigned int)num) && turn)
            {
                num--;
                cnt2++;
            }
            else if(isBinaryPalindrome((unsigned int)num))
            {
                cout<<cnt1<<" "<<cnt2<<nl;
                break;
            }
        }

        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
