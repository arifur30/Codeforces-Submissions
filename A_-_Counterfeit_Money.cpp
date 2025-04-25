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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>>t;
    while (t--)
    {
        
        string s;
        cin >> s;

        bool f = true;
        ll sum = 0, main = 0, cnt = 0;
        for(ll i = s.size()-1; i >= 0; i--)
        {
            cnt++;

            if(cnt == 1)
            {
                sum += s[i] - '0';
            }
            else if(cnt == 2)
            {
                sum += (s[i] - '0')*10;
            }
            else if(cnt == 3)
            {
                sum += (s[i]-'0')*100;
                cnt = 0;
                if(f)
                {
                    main += sum;
                    f = false;
                    
                }
                else
                {
                    main -= sum;
                    f = true;
                }
                sum  = 0;
            }
        }
        if(cnt != 0)
        {
            if(f) main += sum;
            else main -= sum;
        }
        cout << abs(main) << " ";
        if(main% 13 == 0) YES;
        else NO;
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
