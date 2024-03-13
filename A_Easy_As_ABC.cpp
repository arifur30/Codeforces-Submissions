#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"
#define arrin(arr, n) for(ll i = 0; i < n; i++) cin>>arr[i]
#define arrout(arr, n) for(ll i = 0; i < n; i++) cout<<arr[i]<<" ";cout<<nl



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<pair<ll,ll>> a, b, c;
    string s[3];
    cin>>s[0]>>s[1]>>s[2];
    for(ll j = 0; j <3; j++)
    {
        for(int i = 0 ; i < 3; i++)
        {
            if(s[j][i] == 'A')
                a.push_back({j,i});
            else if(s[j][i] == 'B')
                b.push_back({j,i});
            else
                c.push_back({j,i});
        }
    }
    if(!a.empty() && b.empty() && c.empty())
    {
        cout<<"AAA\n";
    }
    else if(a.empty() && !b.empty() && c.empty())
    {
        cout<<"BBB\n";
    }
    else if(a.empty() && b.empty() && !c.empty())
    {
        cout<<"CCC\n";
    }
    
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
