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
#define pb push_back
#define vll vector<ll>


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char ch;
    cin>>ch;
    string s;
    cin>>s;
    ll n = s.length();
    
    vector<string> k(3);
     k[0]= "qwertyuiop";
     k[1] = "asdfghjkl;";
     k[2] = "zxcvbnm,./";


        for(ll x = 0, i, j; x<n; x++)
        {
            for(i = 0; i < 3; i++)
            {
                for(j = 0; j < 10; j++)
                {
                    if(s[x] == k[i][j])
                    {
                        
                        break;
                    }
                }
                if(j < 10)
                {
                    break;
                }
            }
            if(i < 3)
            {
                if(ch == 'R')
                {
                    if(j > 0)
                    {
                        cout<<k[i][j-1];
                    }
                    else
                    {
                        cout<<k[i][j];
                    }
                }
                else
                {
                    if(j < 9)
                    {
                        cout<<k[i][j+1];
                    }
                    else
                    {
                        cout<<k[i][j];
                    }
                }
            }
        }
    
    cout<<nl;
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
